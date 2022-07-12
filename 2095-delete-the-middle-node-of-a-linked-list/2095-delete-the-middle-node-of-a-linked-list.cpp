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
    ListNode* deleteMiddle(ListNode* head) {
        vector<ListNode*> v;
        ListNode* l=head;
        while(l!=NULL)
        {
            v.push_back(l);
            l=l->next;
        }
        //cout<<v.size()<<endl;
        if(v.size()==1)
        {
            return NULL;
        }
        long int m=v.size()/2;
        ListNode *prv=v[m-1];
        ListNode *pre = v[m];
        prv->next=pre->next;
        return head;
        
        
    }
};