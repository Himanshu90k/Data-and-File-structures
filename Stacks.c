#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* link;
};

struct Node* top;

void Push(int x) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->link = top;
    top = temp;
}

void Pop() {
    if (top == NULL) return;
    struct Node* temp;
    temp = top;
    top = top->link;
    free(temp);
}

void Print() {
    if(top == NULL) return;
    struct Node* temp = top;
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->link;
    }
    printf("\n");
}

int Top() {
    return top->data;
}

int main() {
    top = NULL;
    Push(1);Print();
    Push(2);Print();
    Push(3);Print();
    Pop();Print();
    printf("%d", Top());

}