#include <stdio.h>
#include <stdlib.h>

// Define a structure for a node in the linked list
struct Node 
{
    int data;
    struct Node* next;
};

// Declare global variables for the head of the linked list
struct Node* head = NULL;

// Function to insert a new element at the beginning of the linked list
void insertAtBeginning() 
{
    int value;
    printf("Enter the value to insert at the beginning: ");
    scanf("%d", &value);

    // Create a new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = head;

    // Update the head to point to the new node
    head = newNode;
}

// Function to insert a new element at the end of the linked list
void insertAtEnd() {
    int value;
    printf("Enter the value to insert at the end: ");
    scanf("%d", &value);

    // Create a new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    // If the list is empty, make the new node the head
    if (head == NULL) {
        head = newNode;
        return;
    }

    // Otherwise, traverse to the end and insert the new node
    struct Node* current = head;
    while (current->next != NULL) 
        current = current->next;
    
    current->next = newNode;
}

// Function to delete the first occurrence of a node with a specific value from the linked list
void deleteNode() 
{
    if (head == NULL)
    {
        printf("List is empty. Nothing to delete.\n");
        return;
    }

    int value;
    printf("Enter the value to delete: ");
    scanf("%d", &value);

    struct Node* current = head;
    struct Node* prev = NULL;

    // Search for the node with the given value
    while (current != NULL && current->data != value) {
        prev = current;
        current = current->next;
    }

    // If the value is found, delete the node
    if (current != NULL)
    {
        if (prev == NULL) 
            head = current->next;
        else 
            prev->next = current->next;
        
        free(current);
        printf("Value %d deleted from the list.\n", value);
    } 
    else
        printf("Value %d not found in the list.\n", value);
}

// Function to display the elements of the linked list
void display() {
    struct Node* current = head;
    if (current == NULL) {
        printf("List is empty.\n");
        return;
    }
    printf("Linked List: ");
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() 
{
    int choice;
    while (1) 
    {
        printf("\nLinked List Operations\n");
        printf("1. Insert at Beginning\n2. Insert at End\n3. Delete\n4. Display\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                insertAtBeginning();
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
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
