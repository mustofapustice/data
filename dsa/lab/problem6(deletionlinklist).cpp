//Write a program to delete a node form a linked list
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

Node* head = nullptr;

void insert(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

void deleteNode(int value) {
    if(head == nullptr) { // if the list is empty
        return;
    }
    if(head->data == value) { // if the head is the node to be deleted
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    Node* currNode = head;
    while(currNode->next != nullptr && currNode->next->data != value) {
        currNode = currNode->next;
    }
    if(currNode->next != nullptr) { // if the node to be deleted is found
        Node* temp = currNode->next;
        currNode->next = currNode->next->next;
        delete temp;
        return;
    }
}

void printList() {
    Node* currNode = head;
    cout << "List: ";
    while(currNode != nullptr) {
        cout << currNode->data << " ";
        currNode = currNode->next;
    }
    cout << endl;
}

int main() {
    insert(5);
    insert(4);
    insert(3);
    insert(2);
    insert(1);
    printList();

    deleteNode(3);
    printList();

    deleteNode(1);
    printList();

    deleteNode(5);
    printList();

    return 0;
}

