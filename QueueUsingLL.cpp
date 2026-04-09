#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* front = NULL;
Node* rear = NULL;

// Enqueue operation
void enqueue(int x) {
    Node* newNode = new Node();
    newNode->data = x;
    newNode->next = NULL;

    if (rear == NULL) {
        front = rear = newNode;
        return;
    }
    rear->next = newNode;
    rear = newNode;
}

// Dequeue operation
void dequeue() {
    if (front == NULL) {
        cout << "Queue is Empty\n";
        return;
    }
    Node* temp = front;
    cout << "Deleted: " << temp->data << endl;
    front = front->next;
    if (front == NULL)
        rear = NULL;
    delete temp;
}

// Display queue
void display() {
    Node* temp = front;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();
    return 0;
}