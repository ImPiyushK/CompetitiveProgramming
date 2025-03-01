#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *left, *right;
    Node(int d){
        data = d;
        left = right = nullptr;
    }
};

bool searchDFS(Node *root, int value){
    if (root == nullptr) 
        return false;
    if (root->data == value) 
        return true;

    bool left_res = searchDFS(root->left, value);
    bool right_res = searchDFS(root->right, value);

    return left_res || right_res;
}

int main()
{
    Node *root = new Node(2);
    root->left = new Node(3);
    root->right = new Node(4);
    root->left->left = new Node(5);
    root->left->right = new Node(6);

    int value = 6;
    if (searchDFS(root, value))
        cout << value << " is found in the binary tree" << endl;
    else
        cout << value << " is not found in the binary tree" << endl;

    return 0;
}
