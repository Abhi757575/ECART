#include<bits/stdc++.h>
using namespace std;

// node class to represent each element in the linked list
class Node {
    public:
    int data; //data stored in the node
    Node* next; //pointer to the next node
 
    // Constructor to initialize a new node
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }

    //constructor with only data 
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};
// class to handle ll operations 
class Solution {
    public:
    // function to insert a new node at the head
    Node* insertAtHead(Node* head, int newData) {
        // create a new whose next points to current head
        Node* newNode = new Node(newData, head);

        // return new node as head 
        return newNode;
    }

    //print linked list
    void printList(Node* head) {
        Node* temp =head;
        while(temp != nullptr) {
            cout << temp ->data << " ";
            temp = temp -> next;
        }
        cout << endl;
    }
};

int main() {
    Solution ll;
    // create a sample

    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    cout << "Original Linked List: ";
    ll.printList(head);

    // insert a new node at the head
    head = ll.insertAtHead(head, 5);

    cout << "Linked List after inserting 5 at head: ";
    ll.printList(head);
    return 0;

}