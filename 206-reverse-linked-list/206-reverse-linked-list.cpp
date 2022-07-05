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
    ListNode* reverseList(ListNode* head) {
        ListNode *nex;
        ListNode *cur, *prv=nullptr;
        nex=head;
        if(nex==NULL)
        {
            return head;
        }
        if(nex->next==nullptr)
        {
            return head;
        }
        while(nex)
        {
            cur = nex;
            nex = cur->next;
            cur->next=prv;
            prv=cur;
        }
        
        return prv;
    }
};