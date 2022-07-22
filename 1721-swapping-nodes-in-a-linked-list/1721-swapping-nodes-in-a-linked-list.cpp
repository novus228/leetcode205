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
    ListNode* reverse(ListNode *head)
    {
        ListNode *next=head;
        ListNode *prv=NULL;
        ListNode *cur=head;
        while(cur!=NULL)
        {
            next=cur->next;
            cur->next=prv;
            prv=cur;
            cur=next;
        }
        return prv;
    }
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *start=head;
        long int count=1;
        while(start!=NULL)
        {
            if(count==k)
            {
                break;
            }
            start=start->next;
            count++;
        }
        //cout<<start->val<<endl;
        count=1;
        ListNode *end=reverse(head);
        ListNode *t=end;
        while(end!=NULL)
        {
            if(count==k)
            {
                break;
            }
            end=end->next;
            count++;
        }
        //cout<<end->val<<endl;
        head=reverse(t);
        swap(start->val,end->val);
        return head;
    }
};