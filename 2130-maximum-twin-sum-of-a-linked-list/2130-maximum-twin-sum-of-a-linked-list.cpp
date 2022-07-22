/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int pairSum(ListNode* head) {
        vector<int> v;
        long int maxx=0;
        while(head!=NULL)
        {
            v.push_back(head->val);
            head=head->next;
        }
        long int n=v.size()-1;
        for(long int i=0;i<v.size()/2;i++)
        {
            long int sum=v[i]+v[n-i];
            maxx = max(maxx,sum);
        }
        return maxx;
        
    }
};