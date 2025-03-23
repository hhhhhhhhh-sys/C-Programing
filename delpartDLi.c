#include<stdio.h>
#include<stdlib.h>


struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};


struct Node* createNode(int newData) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}


struct Node* deleteAtPosition(struct Node* head, int position) {
    if (head == NULL) {
        printf("List is empty, deletion not possible\n");
        return NULL;
    }

    struct Node* temp = head;

    
    for (int i = 1; i < position && temp != NULL; i++) {
        temp = temp->next;
    }

        if (temp == NULL) {
        printf("Invalid position for deletion\n");
        return head;
    }

    
    if (temp->prev != NULL) {
        temp->prev->next = temp->next;
    }
    if (temp->next != NULL) {
        temp->next->prev = temp->prev;
    }

    
    if (temp == head) {
        head = temp->next;
    }

    free(temp);
    return head;
}


void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}


int main() {
    struct Node* head = NULL;

    head = createNode(10);
    head->next = createNode(20);
    head->next->prev = head;
    head->next->next = createNode(30);
    head->next->next->prev = head->next;

    printf("Doubly linked list before deletion: ");
    printList(head);

    
    head = deleteAtPosition(head, 2);

    printf("Doubly linked list after deletion at position 2: ");
    printList(head);


    return 0;
}
