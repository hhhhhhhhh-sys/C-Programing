#include <stdio.h>
#include <stdlib.h>


struct BinaryTreeNode {
    int data;
    struct BinaryTreeNode* left;
    struct BinaryTreeNode* right;
};


void inorder(struct BinaryTreeNode* node);
void preorder(struct BinaryTreeNode* node);
void postorder(struct BinaryTreeNode* node);
struct BinaryTreeNode* createNode(int value);
struct BinaryTreeNode* insertLeft(struct BinaryTreeNode* node, int value);
struct BinaryTreeNode* insertRight(struct BinaryTreeNode* node, int value);


void inorder(struct BinaryTreeNode* node) {
    if (node == NULL) 
    return;
    inorder(node->left);
    printf("%d -> ", node->data);
    inorder(node->right);
}


void preorder(struct BinaryTreeNode* node) {
    if (node == NULL)
     return;
    printf("%d -> ", node->data);
    preorder(node->left);
    preorder(node->right);
}
 

void postorder(struct BinaryTreeNode* node) {
    if (node == NULL)
     return;
    postorder(node->left);
    postorder(node->right);
    printf("%d -> ", node->data);
}


struct BinaryTreeNode* createNode(int value) {
    struct BinaryTreeNode* newNode = malloc(sizeof(struct BinaryTreeNode));
    if (!newNode) {
        perror("Error allocating memory");
        exit(EXIT_FAILURE);
    }
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}


struct BinaryTreeNode* insertLeft(struct BinaryTreeNode* node, int value) {
    node->left = createNode(value);
    return node->left;
}


struct BinaryTreeNode* insertRight(struct BinaryTreeNode* node, int value) {
    node->right = createNode(value);
    return node->right;
}

int main() {
    struct BinaryTreeNode* root = createNode(7);
    insertLeft(root, 4);
    insertRight(root, 8);
    insertLeft(root->left, 1);
    insertRight(root->right, 5);
    insertLeft(root->left, 6);
    insertRight(root->right, 3);

    printf("Inorder traversal:\n");
    inorder(root);
    printf("\nPreorder traversal:\n");
    preorder(root);
    printf("\nPostorder traversal:\n");
    postorder(root);
    printf("\n");

    return 0;
}