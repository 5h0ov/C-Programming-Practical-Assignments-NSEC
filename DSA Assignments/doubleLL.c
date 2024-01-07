#include <stdio.h>
#include <stdlib.h>

struct Node 
{
    int data;
    struct Node* prev;
    struct Node* next;
};

struct Node* head = NULL;
struct Node* tail = NULL;

void insertAtBegin() 
{
    int value;
    printf("Enter the value to insert at the beginning: ");
    scanf("%d", &value);

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = head;

    if (head != NULL) 
        head->prev = newNode;
    else 
        tail = newNode; // If the list was empty, set the tail to the new node

    head = newNode;
}

void insertAtEnd() 
{
    int value;
    printf("Enter the value to insert at the end: ");
    scanf("%d", &value);

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    newNode->prev = tail;

    if (tail != NULL) 
        tail->next = newNode;
    else
        head = newNode; // If the list was empty, set the head to the new node

    tail = newNode;
}

void deleteNode() 
{
    if (head == NULL) 
    {
        printf("The list is empty. Nothing to delete.\n");
        return;
    }

    int value;
    printf("Enter the value to delete: ");
    scanf("%d", &value);

    struct Node* current = head;

    while (current != NULL) 
    {
        if (current->data == value) 
        {
            if (current == head) 
            {
                head = current->next;
                if (head != NULL) 
                    head->prev = NULL;
                else 
                    tail = NULL; // If the list became empty after deletion
            } 
            else if (current == tail) 
            {
                tail = current->prev;
                tail->next = NULL;
            } 
            else 
            {
                current->prev->next = current->next;
                current->next->prev = current->prev;
            }

            free(current);
            printf("Node with value %d deleted successfully.\n", value);
            return;
        }

        current = current->next;
    }

    printf("Node with value %d not found in the list.\n", value);
}

void display() 
{
    struct Node* current = head;

    if (current == NULL) 
    {
        printf("The list is empty.\n");
        return;
    }

    printf("Double Linked List: ");
    while (current != NULL) 
    {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() 
{
    int choice;
    while (1) 
    {
        printf("\nMenu:\n");
        printf("1. Insert at the beginning\n");
        printf("2. Insert at the end\n");
        printf("3. Delete a node\n");
        printf("4. Display the list\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                insertAtBegin();
                break;
            case 2:
                insertAtEnd();
                break;
            case 3:
                deleteNode();
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
