#include <iostream>
using namespace std;

// There are 2 ways to create Linked List
// 1. Statically
// 2. Dynamically 

class Node{
    public:
    int data;
    Node* next;

    // constructor
    Node(int data){
        this -> data = data;
        next = NULL;
    }
};

void printLL(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
}

int calculateLength(Node* head){
    Node* temp = head;
    int counter = 0;
    while(temp != nullptr){
        counter++;
        temp = temp -> next;
    }
    return counter;
}

Node* takeInput(){
    int data;
    cout << "Enter data: " << endl;
    cin >> data;

    // create head of the linked list
    Node* head = NULL;
    while(data != -1){
        // create the new node with the data
        Node* newNode = new Node(data);
        if(head == NULL){
            head = newNode;
        }else{
            // figure out the address of lastNode and append the newNode
            Node* temp = head;
            while(temp -> next != NULL){
                temp = temp -> next;
            }
            temp -> next = newNode;
        }
        cout << "Enter data again: " << endl;
        cin >> data;
    }
    return head;
}

Node* takeInputBetter(){
    int data;
    cout << "Enter data: " << endl;
    cin >> data;

    Node* head = nullptr;
    Node* tail = nullptr;

    while(data != -1){
        Node* newNode = new Node(data);
        if(head == nullptr){
            head = newNode;
            tail = newNode;
        }else{
            tail -> next = newNode;
            tail = newNode; // updating the tail
        }
        cout << "Enter data again:" << endl;
        cin >> data;
    }
    return head;
}

void printINode(Node* head, int i ){
    int counter = 0;
    Node* temp = head;
    while(temp != nullptr){
        if(counter == i){
            cout << temp -> data << endl;
            return;
        }
        counter++;
        temp = temp -> next;
    }
}

int main(){
    // statically
    Node n1(10);
    Node n2(20);
    Node n3(30);
    Node n4(40);
    Node n5(50);

    Node *head = &n1;

    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    n5.next = NULL;

    // cout << "head's data: " << head -> data << endl;
    // // using n1 print n2 data
    // cout << "print n2 data using n1: " << n1.next ->data << endl;
    // cout << "print n3 data using n2: " << n2.next -> data << endl;

    // printLL(head);
    // cout << endl;
    // int length = calculateLength(head);
    // cout << "length of linked list is: " << length << endl;

    // Node* updatedHead = takeInput();
    // printLL(updatedHead);

    Node* betterHead = takeInputBetter();
    // printLL(betterHead);

    cout << "Print ith node: " << endl;
    printINode(betterHead, 2);
}