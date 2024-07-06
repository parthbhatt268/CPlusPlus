#include <iostream>

using namespace std;

struct Node{
    int data;
    Node* next;
};

int main(){
    Node* c = new Node;
    c->data = 15;
    c->next = nullptr;

   
    Node* b = new Node;
    b->data = 14;
    b->next = c;

    Node* a = new Node;
    a->data = 13;
    a->next = b;

    Node* head = new Node;
    Node* curr = new Node;

    head = a;

Node* temp = head;
    while (temp != nullptr) {
        cout << endl;
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}