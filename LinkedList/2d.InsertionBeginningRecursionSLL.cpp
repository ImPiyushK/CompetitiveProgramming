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

Node * createLinkedListStart(int arr[], int index, int n, Node *prev){
    if(index == n)
        return prev;

    Node* temp = new Node(arr[index]);
    temp->next = prev;

    return createLinkedListStart(arr, index + 1, n, temp);
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

    head = createLinkedListStart(arr, 0, 6, head);
    traverse(head);
}