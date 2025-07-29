#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node * createLinkedListEnd(int arr[], int index, int n){
    
    // Base Case
    if(index == n)
        return nullptr;

    Node * t = new Node(arr[index]);
    t->next = createLinkedListEnd(arr, index+1, n);

    return t;
}

void traverse(Node *head){
    Node* t = head;
    cout << "Linked List: ";
    while(t != nullptr){     //while(head)
        cout << t->data << ' ';
        t = t->next;
    }
}

int main(){
    Node* head = nullptr;
    int arr[] = {2,4,6,7,8,9};

    head = createLinkedListEnd(arr, 0, 6);
    traverse(head);
}