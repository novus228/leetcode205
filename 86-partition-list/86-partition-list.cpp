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
    ListNode* partition(ListNode* head, int x) {
        ListNode *nhead = new ListNode(0);
        ListNode *hhead = new ListNode(0);
        ListNode *hi = hhead;
        ListNode *l = nhead;
        if(head==NULL || head->next==NULL)
            return head;
        while(head!=NULL)
        {
            if(head->val<x)
            {
                l->next=head;
                l=head;
                head=head->next;
            }
            else
            {
                hi->next=head;
                hi=head;
                head=head->next;
            }
        }
        l->next=hhead->next;
        hi->next=NULL;
        return nhead->next;
            
    }
};