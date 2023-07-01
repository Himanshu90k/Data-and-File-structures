#include <stdio.h>

#define MAX_SIZE 5

int A[MAX_SIZE];
int front = -1;
int rear = -1;

void Enqueue(int x) {
    if((rear + 1)%MAX_SIZE == front) {
        printf("Queue is full: \n");
        return;
    }
    else if(rear == -1) {
        front = 0;
        rear = 0;
        A[rear] = x;
    }
    else {
        rear = (rear +1)%MAX_SIZE;
        A[rear] = x;
    }
}

void Dequeue() {
    if(rear == -1) {
        printf("Queue is empty: \n");
        return;
    }
    else if(front == rear) {
        front = -1;
        rear = -1;
    }
    else {
        front = (front + 1)%MAX_SIZE;
    }
}

int Front() {
    if(rear == -1) {
        printf("Queue is empty: \n");
    }
    else {
        return A[front];
    }
}

void Print() {
    if( rear == -1) {
        printf("queue is empty: \n");
        return;
    }
    else {
        printf("Queue: ");
        int i = 0;
        for(i = front; i != rear;i = (i +1)%MAX_SIZE) { // does not print the last element.
            printf("%d ", A[i]);
        }
        printf("%d ", A[i]);
        printf("\n");
    }
}

int main() {
    Enqueue(1);
    Enqueue(2);
    Enqueue(3);
    Enqueue(4);
    Enqueue(5);
    printf("top of queue: %d\n", Front());
    Print();
    Dequeue();
    Print();
    Enqueue(6);
    Print();
    Dequeue();
    Dequeue();
    Enqueue(7);
    Print();
}