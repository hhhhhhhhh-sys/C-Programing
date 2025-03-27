#include <stdio.h>
#include <stdlib.h>

#define MAX_TREE_HT 100

typedef struct MinHeapNode {
    char data;
    unsigned freq;
    struct MinHeapNode *left, *right;
} MinHeapNode;

typedef struct MinHeap {
    unsigned size, capacity;
    MinHeapNode** array;
} MinHeap;

// Create a new node
MinHeapNode* createNode(char data, unsigned freq) {
    MinHeapNode* node = (MinHeapNode*)malloc(sizeof(MinHeapNode));
    node->data = data; node->freq = freq;
    node->left = node->right = NULL;
    return node;
}

// Create a min heap
MinHeap* createMinHeap(unsigned capacity) {
    MinHeap* heap = (MinHeap*)malloc(sizeof(MinHeap));
    heap->size = 0; heap->capacity = capacity;
    heap->array = (MinHeapNode**)malloc(capacity * sizeof(MinHeapNode*));
    return heap;
}

// Swap nodes
void swapMinHeapNode(MinHeapNode** a, MinHeapNode** b) {
    MinHeapNode* temp = *a; *a = *b; *b = temp;
}

// Heapify
void minHeapify(MinHeap* heap, int idx) {
    int smallest = idx, left = 2 * idx + 1, right = 2 * idx + 2;
    if (left < heap->size && heap->array[left]->freq < heap->array[smallest]->freq)
        smallest = left;
    if (right < heap->size && heap->array[right]->freq < heap->array[smallest]->freq)
        smallest = right;
    if (smallest != idx) {
        swapMinHeapNode(&heap->array[smallest], &heap->array[idx]);
        minHeapify(heap, smallest);
    }
}

// Extract min
MinHeapNode* extractMin(MinHeap* heap) {
    if (heap->size == 0) return NULL;
    MinHeapNode* root = heap->array[0];
    heap->array[0] = heap->array[--heap->size];
    minHeapify(heap, 0);
    return root;
}

// Insert node
void insertMinHeap(MinHeap* heap, MinHeapNode* node) {
    int i = heap->size++;
    while (i && node->freq < heap->array[(i - 1) / 2]->freq) {
        heap->array[i] = heap->array[(i - 1) / 2];
        i = (i - 1) / 2;
    }
    heap->array[i] = node;
}

// Build Huffman Tree
MinHeapNode* buildHuffmanTree(char data[], int freq[], int size) {
    MinHeap* heap = createMinHeap(size);
    for (int i = 0; i < size; ++i)
        heap->array[i] = createNode(data[i], freq[i]);
    heap->size = size;

    for (int i = (heap->size - 1) / 2; i >= 0; --i)
        minHeapify(heap, i);

    while (heap->size > 1) {
        MinHeapNode *left = extractMin(heap);
        MinHeapNode *right = extractMin(heap);
        MinHeapNode* top = createNode('$', left->freq + right->freq);
        top->left = left; top->right = right;
        insertMinHeap(heap, top);
    }
    return extractMin(heap);
}

// Print Huffman codes
void printCodes(MinHeapNode* root, int arr[], int top) {
    if (root->left) {
        arr[top] = 0;
        printCodes(root->left, arr, top + 1);
    }
    if (root->right) {
        arr[top] = 1;
        printCodes(root->right, arr, top + 1);
    }
    if (!(root->left) && !(root->right)) {
        printf("%c: ", root->data);
        for (int i = 0; i < top; ++i)
            printf("%d", arr[i]);
        printf("\n");
    }
}

// Main function
int main() {
    char data[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
    int freq[] = { 5, 9, 12, 13, 16, 45 };
    int size = sizeof(data) / sizeof(data[0]);

    MinHeapNode* root = buildHuffmanTree(data, freq, size);
    int arr[MAX_TREE_HT], top = 0;
    printf("Huffman Codes:\n");
    printCodes(root, arr, top);

    return 0;
}
