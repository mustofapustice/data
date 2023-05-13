//Write a program to insert a node into a linked list.
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

Node* head = nullptr; // global variable, points to the first node of the list

void insert(int value) {
    Node* newNode = new Node(); // create a new node
    newNode->data = value; // set the data of the new node
    newNode->next = head; // make the new node point to the previous first node
    head = newNode; // update the head to point to the new first node
}

void printList() {
    Node* currNode = head; // start at the head of the list
    cout << "List: ";
    while(currNode != nullptr) { // traverse the list until the end is reached
        cout << currNode->data << " ";
        currNode = currNode->next; // move to the next node
    }
    cout << endl;
}

int main() {
    insert(5); // insert nodes at the beginning of the list
    insert(4);
    insert(3);
    insert(2);
    insert(1);
    printList(); // print the list

    return 0;
}

