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
    vector<TreeNode*> p;
    void preorder(TreeNode *root)
    {
        if(root==NULL)
        {
            return ;
        }
        p.push_back(root);
        preorder(root->left);
        preorder(root->right);
    }
    void flatten(TreeNode* root) {
        preorder(root);
        if(p.size()<=1)
            return;
        int count=0;
        for(auto it:p)
        {
            //TreeNode* temp = it;
            root->right=it;
            root->left=NULL;
            root=it;
        }
    }
};