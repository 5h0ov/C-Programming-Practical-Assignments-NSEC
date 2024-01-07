#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct Node
{
    int data;
    struct Node *next;
};
struct Node *first, *p, *second, *third;

// 1.Creating a Linked List

void create()
{
    struct Node *temp;

    temp = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter data: ");
    scanf("%d", &temp->data);
    temp->next = NULL;
    if (first == NULL)
    {
        first = temp;
    }
    else
    {
        struct Node *p = first;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = temp;
    }
}

// 2.Display of Linked List

void display()
{
    p = first;
    printf("The Nodes are: ");
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

// 26.Remove duplicate from a Linked List

void removeDuplicate()
{
    struct Node *ptr1, *ptr2, *dup;
    ptr1 = first;

    while (ptr1 != NULL && ptr1->next != NULL) 
    {
        ptr2 = ptr1;
        while (ptr2->next != NULL) 
        {
            if (ptr1->data == ptr2->next->data) 
            {
                dup = ptr2->next;
                ptr2->next = ptr2->next->next;
                delete (dup);
            }
            else
                ptr2 = ptr2->next;
        }
        ptr1 = ptr1->next;
    }
    printf("All duplicates are removed.\n");
    display();
}

int main()
{

    int choice;
    while (1)
    {
        printf("\n 1.Create \n 2.Display \n 3.Remove duplicate from a LInked List \n 4.To exit \n");
        printf("Enter Choice :\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            removeDuplicate();
            display();
            break;
        case 4:
            exit(1);
            break;
        default:
            printf("Incorrect Choice\n");
        }
    }

    return 0;
}