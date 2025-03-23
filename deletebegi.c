#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* next;
};


void deleteFirstNode(struct Node** head) {
    
    if (*head == NULL) {
        printf("Linked list is empty.\n");
        return;
    }

    
    struct Node* temp = *head;

    
    *head = (*head)->next;

    
    free(temp);

    printf("Node deleted from the beginning successfully.\n");
}


void displayList(struct Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    
    struct Node* head = NULL;


    for (int i = 3; i > 0; i--) {
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = i;
        newNode->next = head;
        head = newNode;
    }

    
    printf("Original Linked List: ");
    displayList(head);

    
    deleteFirstNode(&head);

    
    printf("Linked List after Deletion: ");
    displayList(head);

    return 0;
}
