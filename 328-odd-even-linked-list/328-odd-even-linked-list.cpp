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
    ListNode* oddEvenList(ListNode* head) {
        ListNode *odd;
        ListNode *eve;
        ListNode *e;
        ListNode *temp=head;
        long int count=1;
        if(head==NULL || head->next==NULL)
            return head;
        while(temp!=NULL)
        {
            if(count%2!=0)
            {
                if(count==1)
                {
                    odd=temp;
                    temp=temp->next;
                    count++;
                }
                else
                {
                    odd->next=temp;
                    odd=temp;
                    temp=temp->next;
                    count++;
                }
            }
            else
            {
                if(count==2)
                {
                    eve=temp;
                    temp=temp->next;
                    e=eve;
                    count++;
                }
                else
                {
                    eve->next=temp;
                    eve=temp;
                    temp=temp->next;
                    count++;
                }
            }
        }
        odd->next=e;
        eve->next=NULL;
        return head;
    }
};