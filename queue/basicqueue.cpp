#include <iostream>
using namespace std;


class Node {
    int data;
    Node* next;
    
    Node(int value) : data(value), next(nullptr) {}
};

class CircularQueue {
private:
    Node* front;
    Node* rear;

public:
    CircularQueue() : front(nullptr), rear(nullptr) {}

    ~CircularQueue() {
        
        while (!isEmpty()) {
            dequeue();
        }
    }

    bool isEmpty() {
        return front == nullptr;
    }

    void enqueue(int value) {
        Node* newNode = new Node(value);
        
        if (isEmpty()) {
            front = newNode;
        } else {
            rear->next = newNode;
        }
        
        rear = newNode;
        rear->next = front;  
    }

    int dequeue() {
        if (isEmpty()) {
            throw "Queue is empty. Cannot dequeue.";
        }
        
        int value = front->data;
        Node* temp = front;
        
        if (front == rear) {
            front = nullptr;
            rear = nullptr;
        } else {
            front = front->next;
            rear->next = front;  
        }
        
        delete temp;
        return value;
    }

    int peek() {
        if (isEmpty()) {
            throw "Queue is empty. Cannot peek.";
        }
        
        return front->data;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }
        
        Node* current = front;
        do {
            cout << current->data << " ";
            current = current->next;
        } while (current != front);
        
        cout << endl;
    }
};


int main() {
    CircularQueue queue;

    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    queue.enqueue(40);

    queue.display();  

    cout << "Dequeued: " << queue.dequeue() << endl;  
    cout << "Front element: " << queue.peek() << endl; 

    queue.display();

    return 0;
}
