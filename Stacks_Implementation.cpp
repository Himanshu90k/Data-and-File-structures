#include <iostream>
#include <stack>
using namespace std;

struct Node {
    int data;
    struct Node* link;
};

struct Node* head;

void Insert(int x) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->link = NULL;
    if(head == NULL) {  
        head = temp;
        return;
    }
    struct Node* temp1 = head;
    while(temp1->link != NULL) {
        temp1 = temp1->link;
    }
    temp1->link = temp;
}

void Reverse() {
    if(head == NULL) return;
    stack<struct Node*> s;
    struct Node* temp = head;
    while(temp != NULL) {
        s.push(temp);
        temp = temp->link;
    }
    temp = s.top();
    head = temp;
    s.pop();
    while(!s.empty()) {
        temp->link = s.top();
        s.pop();
        temp = temp->link;
    }
    temp->link = NULL;
}

void Print() {
    struct Node* temp = head;
    printf("Node: ");
    while(temp != NULL) {
        printf("%d ",temp->data);
        temp = temp->link;
    }
    printf("\n");
}

int main() {
    head = NULL;
    Insert(5);Print();
    Insert(4);Print();
    Insert(3);Print();
    Insert(2);Print();
    Insert(1);Print();
    Reverse();Print();
}