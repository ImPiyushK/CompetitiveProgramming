/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
//DFS
//calculate the height of the left and the right subtrees of a node
//then find height to the node as max of the heights of two children plus 1
class Solution {
    public:
        int maxDepth(TreeNode* root) {
            if(root == nullptr)
                return 0;
            
            int lHeight = maxDepth(root->left);
            int rHeight = maxDepth(root->right);
            return max(lHeight, rHeight) + 1;
        }
};

//Level Order
//Simply increase the counter when the level increases and push the children of current node into the queue
//then remove all the nodes from the queue of the current Level.
class Solution {
    public:
        int maxDepth(TreeNode* root) {
            if(!root)
                return 0;
    
            queue<TreeNode*> q;
            q.push(root);
            int depth = 1;
            while(!q.empty()){
                int levelSize = q.size();
    
                for(int i = 0 ; i < levelSize ; ++i){
                    TreeNode* node = q.front();
                    q.pop();
                    if(node->left)
                        q.push(node->left);
                    if(node->right)
                        q.push(node->right);
                }
                depth++;
            }
            return depth - 1;
        }
};