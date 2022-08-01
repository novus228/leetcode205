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
    vector<int> v;
    void ans(TreeNode* root)
    {
        if(root==NULL)
            return;
        v.push_back(root->val);
        ans(root->right);
        ans(root->left);
    }
    bool findTarget(TreeNode* root, int k) {
        ans(root);
        for(long int i=0;i<v.size()-1;i++)
        {
            for(long int j=i+1;j<v.size();j++)
            {
                if(v[i]+v[j]==k)
                    return true;
            }
        }
        return false;
    }
};