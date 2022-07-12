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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp=headA;
        while(headB != NULL)
        {
            //cout<<headB<<endl;
            headA=temp;
            while(headA != NULL)
            {
                //cout<<headA<<" ";
                if(headB==headA)
                    return headB;
                else
                    headA=headA->next;
            }
            //cout<<endl;
            headB=headB->next;
        }
        return NULL;
    }
};