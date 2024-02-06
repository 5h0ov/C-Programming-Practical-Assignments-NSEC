#include <stdio.h>
#include <stdlib.h>

// Definition for a binary tree node
struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
};

// Structure for the stack
struct Stack {
    struct TreeNode** array;
    int capacity;
    int top;
};

// Function to create a new node
struct TreeNode* createNode(int data) {
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to create a new stack
struct Stack* createStack(int capacity) {
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (struct TreeNode**)malloc(stack->capacity * sizeof(struct TreeNode*));
    return stack;
}

// Function to check if the stack is empty
int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

// Function to push a node onto the stack
void push(struct Stack* stack, struct TreeNode* node) {
    stack->array[++stack->top] = node;
}

// Function to pop a node from the stack
struct TreeNode* pop(struct Stack* stack) {
    if (isEmpty(stack))
        return NULL;
    return stack->array[stack->top--];
}

// Function for non-recursive inorder traversal
void inorderTraversal(struct TreeNode* root) {
    struct Stack* stack = createStack(1000);
    struct TreeNode* current = root;

    while (current != NULL || !isEmpty(stack)) {
        while (current != NULL) {
            push(stack, current);
            current = current->left;
        }

        current = pop(stack);
        printf("%d ", current->data);

        current = current->right;
    }

    free(stack->array);
    free(stack);
}

// Function for non-recursive preorder traversal
void preorderTraversal(struct TreeNode* root) {
    struct Stack* stack = createStack(1000);
    push(stack, root);

    while (!isEmpty(stack)) {
        struct TreeNode* current = pop(stack);
        if (current != NULL) {
            printf("%d ", current->data);
            push(stack, current->right);
            push(stack, current->left);
        }
    }

    free(stack->array);
    free(stack);
}

// Function for non-recursive postorder traversal
void postorderTraversal(struct TreeNode* root) {
    struct Stack* stack = createStack(1000);
    struct TreeNode* lastVisited = NULL;

    do {
        while (root != NULL) {
            push(stack, root);
            root = root->left;
        }

        while (root == NULL && !isEmpty(stack)) {
            struct TreeNode* peekNode = stack->array[stack->top];
            
            if (peekNode->right == NULL || lastVisited == peekNode->right) {
                printf("%d ", peekNode->data);
                pop(stack);
                lastVisited = peekNode;
            } else {
                root = peekNode->right;
            }
        }
    } while (!isEmpty(stack));

    free(stack->array);
    free(stack);
}

int main() {
    // Creating a sample binary tree
    struct TreeNode* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);

    // Perform non-recursive traversals
    printf("Non-Recursive Inorder traversal: ");
    inorderTraversal(root);
    printf("\n");

    printf("Non-Recursive Preorder traversal: ");
    preorderTraversal(root);
    printf("\n");

    printf("Non-Recursive Postorder traversal: ");
    postorderTraversal(root);
    printf("\n");

    return 0;
}
