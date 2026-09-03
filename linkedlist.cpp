//linked list

#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
};

void printList(node* head){
    node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtHead(node** head, int newData){
    node* newNode = new node();
    newNode->data = newData;
    newNode->next = *head;
    *head = newNode;
}

void insertAtTail(node** head, int newData){
    node* newNode = new node();
    newNode->data = newData;
    newNode->next = NULL;

    if(*head == NULL){
        *head = newNode;
        return;
    }

    node* temp = *head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}

void searchbyvalue(node* head, int value){
    node* temp = head;
    while(temp != NULL){
        if(temp->data == value){
            cout << "Value " << value << " found in the list." << endl;
            return;
        }
        temp = temp->next;
    }
    cout << "Value " << value << " not found in the list." << endl;
}

int main(){
    node n1;
    node n2;
    node n3;
    node n4;

    n1.data = 10;
    n2.data = 20;
    n3.data = 30;
    n4.data = 40;

    node* head = &n1;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = NULL;



}