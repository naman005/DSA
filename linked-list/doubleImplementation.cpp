#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* prev;
    Node* next;

    // constructor
    Node(int d) {
        this -> data = d;
        this -> prev = NULL;
        this -> next = NULL;
    }
    // destructor
    ~Node() {
        if(next != NULL) {
            delete next;
            next = NULL;
        }
    }

};

void insertAtHead(Node* &head, int d) {
    Node* temp = new Node(d);
    temp -> next = head;
    head -> prev = temp;
    head = temp;
}

void insertAtTail(Node* &tail, int d) {
    Node* temp = new Node(d);
    tail -> next = temp;
    temp -> prev = tail;
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
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;

}
// Deletion
void deleteNode(int position, Node* &head) {

    // deleting head
    if(position == 1) {
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
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
        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }

    
}

int getLength(Node* head) {
    int len = 0;
    Node* temp = head;
    while(temp != NULL) {
        len++;
        temp = temp -> next;
    }
    return len;
}

void print(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
    // int len = getLength(head);
    // cout << len << endl;
}

int main() {
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    print(head);

    insertAtHead(head, 11);
    print(head);

    insertAtTail(tail, 25);
    print(head);

    insertAtMiddle(head, tail, 3, 22);
    print(head);
    
    return 0;
}