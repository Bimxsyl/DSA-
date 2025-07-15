#include <iostream>
using namespace std;

#define SIZE 100
int stack[SIZE];
int top = -1;

void push(int value) {
    if (top >= SIZE - 1)
        cout << "Stack Overflow\n";
    else
        stack[++top] = value;
}

void pop() {
    if (top < 0)
        cout << "Stack Underflow\n";
    else
        cout << "Popped: " << stack[top--] << "\n";
}

void display() {
    if (top < 0) {
        cout << "Stack is empty\n";
        return;
    }
    cout << "Stack: ";
    for (int i = 0; i <= top; i++)
        cout << stack[i] << " ";
    cout << "\n";
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
