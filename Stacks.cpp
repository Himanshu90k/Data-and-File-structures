#include <stdio.h>
#define MAX_SIZE 101
int A[MAX_SIZE];
int top = -1;

void Push(int x) {
    if( top == MAX_SIZE - 1) {
        printf("Error: No more space \n");\
        return;
    }
    A[++top] = x;
}

void Pop() {
    if( top == -1) {
        printf("Error: Stack is empty");
        return;
    }
    top--;
}

int Top() {
    return A[top];
}

void Print() {
    int i = 0;
    printf("Stack: ");
    for(i = 0; i<= top; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int main() {
    Push(1); Print();
    Push(2); Print();
    printf("%d ",Top());
    Pop(); Print();
}