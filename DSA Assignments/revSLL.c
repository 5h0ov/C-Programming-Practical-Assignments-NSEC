#include<stdio.h>
#include<stdlib.h>
 
struct node 
{
   int data;
   struct node *next;
};
 
typedef struct node Node;
 
struct node *createNode(int val){
   struct node *newNode = malloc(sizeof( struct node  ));
   newNode->data = val;
   newNode->next = NULL;
   return newNode;
}
 
struct node*create(int arr[], int arraySize)
{
   struct node *rootNodePtr = createNode(arr[0]);
   struct node *lastNodePtr = rootNodePtr;
 
   for(int i = 1 ; i < arraySize; i++)
   {
       struct node *nodePtr = createNode(arr[i]);
       lastNodePtr->next =nodePtr;
       lastNodePtr=lastNodePtr->next;
   }
   return rootNodePtr;
}
 
void printlist(struct node *head)
{
   while(head!=NULL)
   {
       printf("%d ",head->data);
       head = head->next;
   }
   printf("\n");
}
 
struct node *reverse( struct node *head )
{
    struct node *prevP = NULL;
    struct node *nextP = head->next;
 
    while(head != NULL) 
    {
        head->next = prevP;
        prevP = head;
        head = nextP;
        if(head) nextP = head->next;
    }
    return prevP;
}

int main()
{
    int arr[] = {55,10,2,3,4,20,7,6,8,9,12,15};
    struct node *head =create(arr, sizeof(arr)/sizeof(int));
    printf("Original List: ");   
    printlist(head);
    printf("Reversed List: ");
    printlist(reverse(head));
}