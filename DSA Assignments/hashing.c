#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

typedef struct Node {
    int key;
    struct Node *next;
} Node;

typedef struct {
    Node **keys;  // Change from int* to Node**
    int size;
} HashTable;

// Function prototypes
int hashFunction(int key, int size);
void insertLinearProbing(HashTable *hashTable, int key);
void insertQuadraticProbing(HashTable *hashTable, int key);
void insertDoubleHashing(HashTable *hashTable, int key);
void insertChaining(HashTable *hashTable, int key);

// Initialize hash table
void initializeHashTable(HashTable *hashTable, int size) {
    hashTable->size = size;
    hashTable->keys = (Node **)malloc(size * sizeof(Node*));  // Change from int* to Node**

    // Initialize all elements to NULL (indicating empty)
    for (int i = 0; i < size; i++) {
        hashTable->keys[i] = NULL;
    }
}

// Hash function (modulus division)
int hashFunction(int key, int size) {
    return key % size;
}

// Linear probing
void insertLinearProbing(HashTable *hashTable, int key) {
    int index = hashFunction(key, hashTable->size);

    while (hashTable->keys[index] != NULL) {
        index = (index + 1) % hashTable->size;
    }

    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->key = key;
    newNode->next = NULL;
    
    hashTable->keys[index] = newNode;
}

// Quadratic probing
void insertQuadraticProbing(HashTable *hashTable, int key) {
    int index = hashFunction(key, hashTable->size);
    int i = 1;

    while (hashTable->keys[index] != NULL) {
        index = (index + i * i) % hashTable->size;
        i++;
    }

    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->key = key;
    newNode->next = NULL;
    
    hashTable->keys[index] = newNode;
}

// Double hashing
int secondHashFunction(int key) {
    return 5 - (key % 5);
}

void insertDoubleHashing(HashTable *hashTable, int key) {
    int index = hashFunction(key, hashTable->size);
    int step = secondHashFunction(key);

    while (hashTable->keys[index] != NULL) {
        index = (index + step) % hashTable->size;
    }

    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->key = key;
    newNode->next = NULL;
    
    hashTable->keys[index] = newNode;
}

// Chaining
void insertChaining(HashTable *hashTable, int key) {
    int index = hashFunction(key, hashTable->size);

    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->key = key;
    newNode->next = hashTable->keys[index];
    
    hashTable->keys[index] = newNode;
}

// Display hash table
void displayHashTable(HashTable *hashTable, int chain) {
    for (int i = 0; i < hashTable->size; i++) {
        printf("[%d]: ", i);

        Node *temp = hashTable->keys[i];
        while (temp != NULL) {
            if(chain == 1)
                printf("%d -> ", temp->key);
            else
                printf("%d", temp->key);
            temp = temp->next;
        }

        if(chain == 1)
            printf("NULL");
        printf("\n");
    }
}

int main() {
    HashTable hashTable;
    int keys[] = {25, 32, 45, 55, 65, 76, 85};
    int numKeys = sizeof(keys) / sizeof(keys[0]);
    int chain = 0;  // 1 for chaining, 0 for others

    initializeHashTable(&hashTable, SIZE);

    for (int i = 0; i < numKeys; i++) {
        insertLinearProbing(&hashTable, keys[i]);
        // insertQuadraticProbing(&hashTable, keys[i]);
        // insertDoubleHashing(&hashTable, keys[i]);
        // insertChaining(&hashTable, keys[i]);      
    }

    displayHashTable(&hashTable, chain);
    return 0;
}
