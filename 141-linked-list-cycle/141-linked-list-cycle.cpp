/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *s=head,*l=head;
        while(l!=NULL && l->next!=NULL)
        {
            s=s->next;
            l=l->next->next;
            if(s==l)
                return true;
        }
        return false;
    }
};