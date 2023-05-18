#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

Node* GetNewNode(int x) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = x;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

Node* head;

void InsertAtHead(int x) {
    Node* NewNode = GetNewNode(x);
    if(head == NULL) {
        head = NewNode;
        return;
    }
    head->prev = NewNode;
    NewNode->next = head;
    head = NewNode;
}

void Print() {
    Node* temp = head;
    cout<< "Forward Print: ";
    while(temp != NULL) {
        cout<< temp->data<<" ";
        temp = temp->next;
    }
    cout<<"\n";
}

void ReversePrint() {
    Node* temp = head;
    cout<< "Backward Print: ";
    while(temp->next != NULL) {
        temp = temp->next;
    }
    while(temp != NULL) {
        cout<< temp->data << " ";
        temp = temp->prev;
    }
    cout<<"\n";
}

int main() {

    head = NULL;
    InsertAtHead(5); Print(); ReversePrint();
    InsertAtHead(4); Print(); ReversePrint();
    InsertAtHead(3); Print(); ReversePrint();
    InsertAtHead(2); Print(); ReversePrint();

    return 0;
}