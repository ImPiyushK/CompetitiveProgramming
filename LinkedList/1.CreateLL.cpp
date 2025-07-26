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
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
};

int main(){
    Node* head = new Node(1);
    Node* p = new Node(2, nullptr);
    head->next = p;

    cout << head << ' ';
    cout << head->data << ' ';
    cout << head->next << '\n';

    cout << head->next << ' ' << head->next->data << ' ' << head->next->next;
}