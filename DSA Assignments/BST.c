#include <stdio.h>
#include <stdlib.h>

// Node structure for the binary search tree
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Global variable for the root of the tree
struct Node* root = NULL;

// Function to create a new node
struct Node* createNode() {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to insert a value into the BST
void insert() {
    int value;
    printf("Enter the value to insert: ");
    scanf("%d", &value);

    struct Node* newNode = createNode();
    newNode->data = value;

    if (root == NULL) {
        root = newNode;
    } 
    else 
    {
        struct Node* current = root;
        while (1) 
        {
            if (value < current->data) 
            {
                if (current->left == NULL) 
                {
                    current->left = newNode;
                    break;
                }
                current = current->left;
            } 
            else if (value > current->data) 
            {
                if (current->right == NULL) 
                {
                    current->right = newNode;
                    break;
                }
                current = current->right;
            } 
            else 
            {
                // Duplicate values are not allowed in this example
                free(newNode);
                break;
            }
        }
    }

    printf("%d inserted into the BST.\n", value);
}

// Function to find the minimum value node in a BST
struct Node* minValueNode() 
{
    struct Node* current = root;

    while (current->left != NULL) 
        current = current->left;
    
    return current;
}

// Function to delete a value from the BST
void deleteNode() 
{
    int key;
    printf("Enter the value to delete: ");
    scanf("%d", &key);

    if (root == NULL) 
    {
        printf("Tree is empty. Cannot delete.\n");
        return;
    }

    struct Node* current = root;
    struct Node* parent = NULL;

    while (current != NULL && current->data != key) 
    {
        parent = current;
        if (key < current->data) 
        {
            current = current->left;
        } 
        else 
        {
            current = current->right;
        }
    }

    if (current == NULL) 
    {
        printf("%d not found in the BST. Cannot delete.\n", key);
        return;
    }

    // Node with only one child or no child
    if (current->left == NULL) 
    {
        if (parent == NULL) 
            root = current->right;

        else if (parent->left == current) 
            parent->left = current->right;

        else 
            parent->right = current->right;
        
        free(current);
    } 
    else if (current->right == NULL) 
    {
        if (parent == NULL) 
            root = current->left;

        else if (parent->left == current) 
            parent->left = current->left;

        else 
            parent->right = current->left;
    
        free(current);
    } else {
        // Node with two children
        struct Node* temp = minValueNode();
        current->data = temp->data;
        deleteNode();  // Recursively delete the node with the replaced value
    }

    printf("%d deleted from the BST.\n", key);
}

// Function to search for a value in the BST
void search() {
    int key;
    printf("Enter the value to search: ");
    scanf("%d", &key);

    struct Node* current = root;

    while (current != NULL && current->data != key) 
    {
        if (key < current->data) 
            current = current->left;
        else 
            current = current->right;
    }

    if (current != NULL) 
        printf("%d found in the BST.\n", key);
    else 
        printf("%d not found in the BST.\n", key);
}

// Function to perform inorder traversal
void inorder(struct Node* node) 
{
    if (node != NULL) 
    {
        inorder(node->left);
        printf("%d ", node->data);
        inorder(node->right);
    }
}

// Function to perform preorder traversal
void preorder(struct Node* node) 
{
    if (node != NULL)
    {
        printf("%d ", node->data);
        preorder(node->left);
        preorder(node->right);
    }
}

// Function to perform postorder traversal
void postorder(struct Node* node) 
{
    if (node != NULL) 
    {
        postorder(node->left);
        postorder(node->right);
        printf("%d ", node->data);
    }
}

void main() {
    int choice;

    do 
    {
        printf("\nBinary Search Tree Operations\n");
        printf("1. Construct a BST\n");
        printf("2. Insert element into a non-empty BST\n");
        printf("3. Delete element from a non-empty BST\n");
        printf("4. Search for an element in a BST\n");
        printf("5. Traverse in inorder, preorder, postorder\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                // Construct a BST (Construction begins from an empty tree)
                root = NULL;
                printf("BST constructed.\n");
                break;
            case 2:
                // Insert element(s) into a non-empty BST
                insert();
                break;
            case 3:
                // Delete element(s) from a non-empty BST
                deleteNode();
                break;
            case 4:
                // Search for an element in a BST
                search();
                break;
            case 5:
                // Traverse in inorder, preorder, postorder
                printf("Inorder traversal: ");
                inorder(root);
                printf("\n");

                printf("Preorder traversal: ");
                preorder(root);
                printf("\n");

                printf("Postorder traversal: ");
                postorder(root);
                printf("\n");
                break;
            case 6:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 6);
}
