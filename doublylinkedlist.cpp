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

    void insertatHead(Node** head, int data){
        Node* newNode = new Node(data);
        newNode->next = *head;
        if(*head != nullptr){
            (*head)->prev = newNode;
        }
        *head = newNode;
    }

    void insertatTail(Node** head, int data){
        Node* newNode = new Node(data);
        if(*head == nullptr){
            *head = newNode;
            return;
        }
        Node* temp = *head;
        while(temp->next != nullptr){
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }

    void deletefromtail(Node** head){
        if(*head == nullptr){
            return;
        }
        Node* temp = *head;
        while(temp->next != nullptr){
            temp = temp->next;
        }
        if(temp->prev != nullptr){
            temp->prev->next = nullptr;
        } else {
            *head = nullptr;
        }
        delete temp;
    }


};

void traverseForward(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main (){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    Node* head = nullptr;
    for(int i = 0; i < n; i++){
        head->insertatHead(&head, arr[i]);
    }
    traverseForward(head);
    return 0;
}
