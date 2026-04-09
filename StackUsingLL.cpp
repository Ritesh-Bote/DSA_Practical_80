#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* top = NULL;

// Push operation
void push(int x) {
    Node* newNode = new Node();
    newNode->data = x;
    newNode->next = top;
    top = newNode;
}

// Pop operation
void pop() {
    if (top == NULL) {
        cout << "Stack is Empty\n";
        return;
    }
    Node* temp = top;
    cout << "Popped: " << temp->data << endl;
    top = top->next;
    delete temp;
}

// Display stack
void display() {
    Node* temp = top;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    push(10);
    push(20);
    push(30);
    display();
    pop();
    display();
    return 0;
}