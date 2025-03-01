#include<iostream>
using namespace std;

/* 
* Trees can be represented in two ways:
    - Dynamic Node Representation (Linked Representation)
    - Array Representation (Sequential Representation)
* struct default access specifier is public and class private
* nullptr is better than NULL as NULL causes error in func overloading
*/

// struct Node{
//     int data;
//     Node* left, * right;
// Node(){
//     data = 0;
//     left = right = nullptr;
// }
// Node(int key){
//     data = key;
//     left = right = nullptr;
// }
// Node(int key, Node* l, Node* r){
//     data = key;
//     left = l;
//     right = r;
// }
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