#include <stdio.h>
#define MAX 100

int stack1[MAX], stack2[MAX];
int top1 = -1, top2 = -1;

void push1(int data) {
    if (top1 == MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack1[++top1] = data;
}

int pop1() {
    if (top1 == -1) {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack1[top1--];
}

void push2(int data) {
    if (top2 == MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack2[++top2] = data;
}

int pop2() {
    if (top2 == -1) {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack2[top2--];
}

void enqueue(int data) {
    push1(data);
    printf("Enqueued %d\n", data);
}

void dequeue() {
    if (top1 == -1 && top2 == -1) {
        printf("Queue is empty\n");
        return;
    }

    if (top2 == -1) {
        while (top1 != -1) {
            push2(pop1());
        }
    }

    printf("Dequeued %d\n", pop2());
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    return 0;
}