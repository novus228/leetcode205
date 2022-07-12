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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* l=head;
        long int size=1;
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        while(l->next!=NULL)
        {
            l=l->next;  
            size+=1;
        }
        l->next=head;
        ListNode* first=head;
        for(long int i=0;i< size-(k%size)-1;++i)
        {
            first=first->next;
        }
        head=first->next;
        first->next=NULL;
        return head;
    }
};