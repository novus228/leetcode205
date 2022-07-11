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
    void ins(TreeNode* root, int val) {
        if(root->val > val)
        {
            if(root->left!=NULL)
            {
                ins(root->left,val);
            }
            else if(root->left==NULL)
            {
                TreeNode *tem = new TreeNode(val);
                root->left=tem;
            }
            // else if(root->right==NULL)
            // {
            //     TreeNode *tem = new TreeNode(val);
            //     root->right=tem;
            // }
        }
        else
        {
            if(root->right!=NULL)
            {
                ins(root->right,val);
            }
            else if(root->right==NULL)
            {
                TreeNode *tem = new TreeNode(val);
                root->right=tem;
            }
            // else if(root->left==NULL)
            // {
            //     TreeNode *tem = new TreeNode(val);
            //     root->left=tem;
            // }   
        }     
    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==NULL)
        {
            TreeNode *tem = new TreeNode(val);
            return tem;
        }
        ins(root,val);
        return root;
    }
};