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
        unordered_map<ListNode*,int> m;
        ListNode * temp=head;
        ListNode *rm;
        while(temp!=NULL)
        {
            if(m[temp]==1)
            {
                rm=temp;
                return true;
            }
            m[temp]++;
            temp=temp->next;
        }
        return false;
    }
};