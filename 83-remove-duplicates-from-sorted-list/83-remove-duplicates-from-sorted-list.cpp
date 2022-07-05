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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *prv,*cur;
        if(head==NULL)
        {
            return head;
        }
        if(head->next==nullptr)
        {
            return head;
        }
        prv=head;
        cur=head->next;
        while(cur)
        {
            if(prv->val==cur->val)
            {
                cur=cur->next;
                prv->next=cur;
            }
            else
            {
                prv=cur;
                cur=cur->next;
            }
        }
        return head;
        
    }
};