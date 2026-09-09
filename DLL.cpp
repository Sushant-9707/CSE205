//write a program to convert as array into a doublt linked list.

#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
    }

    Node(int data, Node* next, Node* prev){
        this->data = data;
        this->prev = prev;
        if(next != nullptr){
            this->next = next;
            next->prev = this;
        } else {
            this->next = nullptr;
        }
    }
};

int main(){

    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    Node* head = nullptr;
    Node* tail = nullptr;

    for(int i = 0; i < n; i++){
        Node* newNode = new Node(arr[i]);
        if(head == nullptr){
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

}

