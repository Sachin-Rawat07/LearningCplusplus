#include <iostream>
#include <vector>
using namespace std;

class CircularQueue {
private:
    vector<int> data;
    int front;
    int rear;
    int maxSize;

public:
    CircularQueue(int size) : data(size), front(-1), rear(-1), maxSize(size) {}

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return (front == 0 && rear == maxSize - 1) || (rear == (front - 1) % (maxSize - 1));
    }

    void enqueue(int value) {
        if (isFull()) {
            throw "Queue is full. Cannot enqueue.";
        }

        if (isEmpty()) {
            front = 0;
            rear = 0;
        } else {
            rear = (rear + 1) % maxSize;
        }

        data[rear] = value;
    }

    int dequeue() {
        if (isEmpty()) {
            throw "Queue is empty. Cannot dequeue.";
        }

        int value = data[front];
        
        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            front = (front + 1) % maxSize;
        }

        return value;
    }

    int peek() {
        if (isEmpty()) {
            throw "Queue is empty. Cannot peek.";
        }

        return data[front];
    }
};

int main() {
    CircularQueue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Dequeued element: " << q.dequeue() << endl;

    q.enqueue(40);
    q.enqueue(50);

    cout << "Peek front element: " << q.peek() << endl;

    q.enqueue(60); 

    return 0;
}
