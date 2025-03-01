#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left, * right;

    Node(){
        data = 0;
        left = right = nullptr;
    }
    Node(int key){
        data = key;
        left = right = nullptr;
    }
    Node(int key, Node* l, Node* r){
        data = key;
        left = l;
        right = r;
    }
};

Node* insert(Node* root, int key){
    if(root == nullptr){
        root = new Node(key);
        return root;
    }

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* curr = q.front();
        q.pop();

        if(curr->left == nullptr){
            curr->left = new Node(key);
            break;
        }
        else
            q.push(curr->left);

        if(curr->right == nullptr){
            curr->right = new Node(key);
            break;
        }
        else
            q.push(curr->right);
    }
    return root;
}

void inorder(Node* root){
    if(!root)
        return;
    inorder(root->left);
    cout << root->data << ' ';
    inorder(root->right);
}

int main(){
    Node* root = new Node(2);
    root->left = new Node(3);
    root->right = new Node(4) ; 
    root->left->left = new Node(5);

    cout << "Inorder traversal before insertion: ";
    inorder(root);
    cout << endl;

    int key = 6;
    root = insert(root, key);

    cout << "Inorder traversal after insertion: ";
    inorder(root);
    cout << endl;
}