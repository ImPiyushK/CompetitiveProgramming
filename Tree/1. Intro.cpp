#include<iostream>
using namespace std;

// struct Node{
//     int data;
//     Node* left, * right;

//     Node(int key){
//         data = key;
//         left = nullptr;
//         right = nullptr;
//     }
// };

class Node{
public:
    int data;
    Node* left, * right;

    Node(int key){
        data = key;
        left = nullptr;
        right = nullptr;
    }
};

int main(){
    Node *root = new Node(2);
    Node* leftChild = new Node(3);
    Node* rightChild = new Node(4);

    root->left = leftChild;
    root->right = rightChild;

    return 0;
}