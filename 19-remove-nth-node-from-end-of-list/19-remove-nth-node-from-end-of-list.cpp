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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        vector<ListNode*> v;
        ListNode* l=head;
        while(l!=NULL)
        {
            v.push_back(l);
            l=l->next;
        }
        if(n-v.size() == 0)
        {
            head=head->next;
            return head;
        }
        ListNode* prv = v[v.size()-n-1];
        ListNode* del = v[v.size()-n];
        prv->next=del->next;
        return head;
        
    }
};