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

// Delete Particular Node at position x
// Use this method of 2 pointers to delete last node as well
Node* deleteParticular(Node *head, int x){
    
    if(x == 1){
        Node *t = head;
        head = head->next;
        delete t;

        return head;
    }

    Node *cur = head, *prev = nullptr;
    x--;
    while (x--) {
        prev = cur;
        cur = cur->next;
    }
    prev->next = cur->next;
    delete cur;

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

    int x = 3;
    head = deleteParticular(head, x);
    cout << "\nLinked List after Deletion:\n";
    traverse(head);
}