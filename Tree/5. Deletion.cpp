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

void deletDeepest(Node* root, Node* dNode) {
    queue<Node*> q;
    q.push(root);

    Node* curr;
    while (!q.empty()) {
        curr = q.front();
        q.pop();

        if (curr == dNode) {  
            curr = nullptr;
            delete (dNode);
            return;
        }
        if (curr->right) {
            if (curr->right == dNode) {
                curr->right = nullptr;
                delete (dNode);
                return;
            } 
            q.push(curr->right);
        }

        if (curr->left) {
            if (curr->left == dNode) {
                curr->left = nullptr;
                delete (dNode);
                return;
            } 
            q.push(curr->left);
        }
    }
}

Node* deletion(Node* root, int key){
    if(root == nullptr)
        return nullptr;
    
    if (root->left == nullptr && root->right == nullptr) {
        if (root->data == key)
            return nullptr;
        else
            return root;
    }

        queue<Node*> q;
        q.push(root);
        Node* curr, * keyNode = nullptr;
        while(!q.empty()){
            curr = q.front();
            q.pop();
            if (curr->data == key)
                keyNode = curr;
            if (curr->left)
                q.push(curr->left);
            if (curr->right)
                q.push(curr->right);
        }
    if (keyNode != nullptr) {
        int x = curr->data;
        keyNode->data = x;
        deletDeepest(root, curr); 
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
    Node* root = new Node(10);
    root->left = new Node(11);
    root->right = new Node(9);
    root->left->left = new Node(7);
    root->left->right = new Node(12);
    root->right->left = new Node(15);
    root->right->right = new Node(8);

    cout << "Inorder traversal before deletion: ";
    inorder(root);
    cout << endl;

    int key = 11;
    root = deletion(root, key);

    cout << "Inorder traversal after deletion: ";
    inorder(root);
    cout << endl;
}