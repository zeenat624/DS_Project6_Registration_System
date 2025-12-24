#ifndef NODEQUEUE_H
#define NODEQUEUE_H

struct Node {
    int data;
    Node* next;
};

class NodeBasedQueue {
private:
    Node* front;
    Node* rear;

public:
    NodeBasedQueue();

    bool isEmpty();
    void enqueue(int data);
    int dequeue();
    void printQueue();
};

#endif

