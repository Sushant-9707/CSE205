//linked list

#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
};

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