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
    void reverse(ListNode* l, ListNode* r)
    {
        ListNode *next;
        ListNode *cur=l;
        ListNode *prv=NULL;
        while(cur!=NULL)
        {
            next = cur->next;
            cur->next = prv;
            prv=cur;
            cur=next;
        }
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        long int count=1;
        ListNode *temp =head;
        ListNode *start=head;
        ListNode *end;
        ListNode *l;
        ListNode *r;
        if(left==right)
        {
            return head;
        }
        while(temp!=NULL)
        {
            if(count==left-1)
            {
                start=temp;
            }
            else if(count==left)
            {
                l = temp;
            }
            else if(count ==  right)
            {
                r = temp;
                end = r->next;
                r->next=NULL;
                break;
            }
            temp=temp->next;
            count+=1;
        }
        reverse(l,r);
        if(left==1)
        {
            l->next=end;
            return r;
        }
        start->next = r;
        l->next = end;
        return head;
    }
};