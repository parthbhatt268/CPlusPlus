#include <iostream>
#include<queue>
using namespace std;


// Define a node structure
struct Node {
    int data;
    Node* next;
};
Node* insertAtEnd(Node* recHead , int val ){

}
int main() {
    cout << "Hello, World!" << endl;
    

    Node* head = new Node;
    head = nullptr;
    Node* current = nullptr;

    for (int i = 1; i <= 5; ++i) {
        Node* newNode = new Node;
        newNode->data = i*i;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
            current = newNode;
        } else {
            // Otherwise, link the new node to the current node
            current->next = newNode;
            // Move the current pointer to the new node
            current = newNode;
        }
    }

    // Display the linked list elements
    Node* temp = head;
    while (temp != nullptr) {
        cout << endl;
        cout << temp->data << " ";
        temp = temp->next;
    }
    int val = 89;
    head = insertAtEnd(head, val);

    return 0;
}
