#include "NodeQueue.h"
#include <iostream>
using namespace std;

NodeBasedQueue::NodeBasedQueue() {
    front = rear = nullptr;
}

bool NodeBasedQueue::isEmpty() {
    if(front == nullptr){
       return true;
	}
	return false;
}

void NodeBasedQueue::enqueue(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;

    if (isEmpty() == true) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
}

int NodeBasedQueue::dequeue() {
    if (isEmpty() == true) {
        cout << "Waitlist is empty no students added in waitlist yet" << endl;
        return -1;
    }

    Node* temp = front;
    int studentID = temp->data;
    front = front->next;
    delete temp;

    if (front == nullptr) {
        rear = nullptr;
    }
    return studentID;
}

void NodeBasedQueue::printQueue() {
    Node* temp = front;
    cout << "Waitlist: ";
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

