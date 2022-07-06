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
class Solution {
public:
    void inorderTraversa(TreeNode* root,vector<int> &v) {
        if(root==NULL)
        {
            return;
        }
            inorderTraversa(root->left,v);
            v.push_back(root->val);
            inorderTraversa(root->right,v);
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;
        inorderTraversa(root,v);
        return v;
    }
};