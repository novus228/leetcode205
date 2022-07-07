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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL)
            return head;
        if(head->next==NULL)
        {
            if(head->val==val)
            {
                head=NULL;
                return head;
            }
        }
        ListNode *prv=NULL;
        ListNode *newhead=head;
        while(head!=NULL)
        {
            if(head->val==val)
            {
                if(prv==NULL)
                {
                    head=head->next;
                    newhead=head;
                }
                else
                {
                    prv->next=head->next;
                    head=head->next;
                }
            }
            else
            {
                prv=head;
                head=head->next;
            }
        }
        return newhead;
        
    }
};