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

Node* insertionBeginning(Node* head, int n){
    if(head == nullptr){
        head = new Node(n);
    }
    else{
        Node *temp = new Node(n);
        temp->next = head;
        head = temp;
    }
    return head;
}

// Delete Node at End
Node* deleteEnd(Node *head){

    if(head == nullptr || head->next == nullptr)
        return nullptr;

    Node *t = head;

    while(t->next->next != nullptr){
        t = t->next;
    }
    delete t->next;
    t->next = nullptr;

    return head;
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
    Node *head = nullptr;
    int n = 10;
    int arr[] = {2, 4, 6, 8, 10};
    for(int i = 0 ; i < 5 ; ++i){
        head = insertionBeginning(head, arr[i]);
    }
    traverse(head);

    head = deleteEnd(head);
    cout << "\nLinked List after Deletion:\n";
    traverse(head);
}