#include<iostream>
using namespace std;  

class Node {
    public:
    int data;
    Node* next;
    
    // constructor
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }

    // destructor
    ~Node() {
        if(this->next != NULL) {
            delete next;
            this -> next = NULL;
        }
    }
};
// Insertion
void insertAtHead(Node* &head, int data) {
    // create new node
    Node* temp = new Node(data);
    temp -> next = head;
    head = temp;

}

void insertAtTail(Node* &tail, int data) {
    // create new node
    Node* temp = new Node(data);
    tail -> next = temp;
    tail = temp;

}

void insertAtMiddle(Node* &head, Node* &tail, int position, int data) {
    if(position == 1) {
        insertAtHead(head, data);
        return;
    }
    
    Node* temp = head;
    int count = 1;
    while(count < position - 1) {
        temp = temp -> next;
        count++;
    }
    if(temp -> next == NULL) {
        insertAtTail(tail, data);
        return;
    }
    // creating a node
    Node* nodeToInsert = new Node(data);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;

}

// Deletion
void deleteNode(int position, Node* &head) {

    // deleting head
    if(position == 1) {
        Node* temp = head;
        head = head -> next;
        // memory free
        temp -> next = NULL;
        delete temp;
    } else {
        Node* curr = head;
        Node* prev = NULL;
        int count = 1;
        while(count < position) {
            prev = curr;
            curr = curr -> next;
            count++;
        }
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }

    
}

void print(Node* &head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next; 
    }
    cout << endl;
}

int main() {
    // created a new node 
    Node* node1 = new Node(10);

    Node* head = node1;
    Node* tail = node1;


    // insert at head
    insertAtHead(head, 12);

    // insert at tail
    insertAtTail(tail, 15);

    // insert at middle
    insertAtMiddle(head, tail, 4, 22);
    
    // print 
    print(head);

    return 0;
}  