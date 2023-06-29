#include <stdio.h>

#define MAX_SIZE 5

int A[MAX_SIZE];
int front = -1;
int rear = -1;

void Enqueue(int x) {
    if(rear == MAX_SIZE-1) {
        printf("Queue is full: \n");
        return;
    } 
    else if(rear == -1){
        front = 0;
        rear = 0;
        A[rear] = x;
    }
    else {
        rear++;
        A[rear] = x;
    }
}

void Dequeue() {
    if(front == -1) {
        printf("Queue is empty: \n");
        return;
    }
    else if(front > rear) {
        printf("Queue underflow: \n");
        return;
    }
    else {
        front++;
    }
}

int Top() {
    if(front == -1) {
        printf("Queue is empty: \n");
    }
    else {
        return A[front];
    }
}

void Print() {
    printf("Queue: ");
    int i = 0;
    for(i = front; i<=rear; i++){
        printf("%d ", A[i]);
    }
    printf("\n");
}

int main() {
    Enqueue(2);
    Enqueue(3);
    Print();
    Dequeue();
    Print();
    Enqueue(4);
    printf("Top of Queue: %d \n",Top());
    Print();
    
}