#include<iostream>
using namespace std;

/* 
* Traversal:
    - DFS: explores as far down a branch as possible before backtracking
        Preorder
        Inorder
        Postorder
    - BFS(Level Order): explores all nodes at the present depth before moving on to nodes at the next depth
*/

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