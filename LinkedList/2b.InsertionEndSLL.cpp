#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

void insertionEnd(Node*& head, Node*& tail, int n){
    if(head == nullptr){
        head = new Node(n);
        tail = head;
    }
    else{
        tail->next = new Node(n);
        tail = tail->next;
    }
}

void traverse(Node *head){
    Node* t = head;
    cout << "Linked List: ";
    while(t){     //while(t != nullptr)
        cout << t->data << ' ';
        t = t->next;
    }
}

int main(){
    Node *head = nullptr, *tail = nullptr;
    int n = 10;
    int arr[] = {2, 4, 6, 8, 10};
    for(int i = 0 ; i < 5 ; ++i){
        insertionEnd(head, tail, arr[i]);
    }
    traverse(head);
}