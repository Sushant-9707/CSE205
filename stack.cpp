//write a code to impelement a stack data class```cpp
#include <iostream>
using namespace std;

class Stack {
private:
    int* arr;
    int top;
    int capacity;
public:
    Stack(int size) {
        capacity = size;
        arr = new int[capacity];
        top = -1;
    }
    void push(int value) {
        if (top == capacity - 1) {
            cout << "Stack Overflow" << endl;
            return;
        }
        arr[++top] = value;
    }
    void pop() {
        if (top == -1) {
            cout << "Stack Underflow" << endl;
            return;
        }
        top--;
    }
    int peek() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return arr[top];
    }
    bool isEmpty() {
        return top == -1;
    }
};

int main() {
    Stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    cout << "Top element is: " << s.peek() << endl;
    s.pop();
    cout << "Top element after pop is: " << s.peek() << endl;
    return 0;
}