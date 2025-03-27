#include <stdio.h>
#include <stdlib.h>

// Define the structure of a tree node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new tree node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to perform in-order traversal
void inOrderTraversal(struct Node* node) {
    if (node == NULL) {
        return;
    }

    // Traverse the left subtree
    inOrderTraversal(node->left);

    // Visit the root node
    printf("%d ", node->data);

    // Traverse the right subtree
    inOrderTraversal(node->right);
}

// Main function
int main() {
    // Creating a sample binary tree
    struct Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);

    printf("In-order traversal of the binary tree: ");
    inOrderTraversal(root);

    return 0;
}
