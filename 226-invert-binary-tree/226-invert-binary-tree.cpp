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
    void doit(TreeNode* root)
    {
        if(root->left!=NULL || root->right!=NULL)
        {
            swap(root->left,root->right);
            if(root->left!=NULL)
            {
                doit(root->left);
            }
            if(root->right!=NULL)
            {
                doit(root->right);
            }   
        }
        
    }
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL)
            return root;
        doit(root);
        return root;
        
    }
};