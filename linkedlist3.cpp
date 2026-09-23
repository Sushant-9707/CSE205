#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

int main(){
    node* head = new node;
    node* sec = new node;

    head->data = 10;
    sec->data = 20;

    head->next = sec;
    sec->next = nullptr;

    node* temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp-> next;
    }
}