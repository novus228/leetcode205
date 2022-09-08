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
    bool check(TreeNode* root)
    {
        if(root==NULL)
            return false;
        if(check(root->left)==false && check(root->right)==false)
        {
            root->left=NULL;
            root->right=NULL;
            if(root->val==0)
            {
                return false;
            }
            else
            {
                return true;
            }
        }
        if(!check(root->left))
        {
            root->left=NULL;
            //return false;
        }
        if(!check(root->right))
        {
            root->right=NULL;
            //return false;
        }
        return true;
    }
    TreeNode* pruneTree(TreeNode* root) {
        bool ans = check(root);
        if(ans==false)
            return NULL;
        return root;
    }
};