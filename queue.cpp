#include <iostream>
using namespace std;

#define SIZE 100
int queue[SIZE];
int front = -1, rear = -1;

void enqueue(int value) {
    if (rear == SIZE - 1) {
        cout << "Queue Overflow\n";
        return;
    }
    if (front == -1) front = 0;
    queue[++rear] = value;
    cout << "Enqueued: " << value << endl;
}

void dequeue() {
    if (front == -1 || front > rear) {
        cout << "Queue Underflow\n";
        return;
    }
    cout << "Dequeued: " << queue[front++] << endl;
}

void display() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty\n";
        return;
    }
    cout << "Queue: ";
    for (int i = front; i <= rear; i++)
        cout << queue[i] << " ";
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
