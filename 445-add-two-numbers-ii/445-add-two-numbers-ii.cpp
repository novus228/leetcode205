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
    ListNode* reverse(ListNode *l)
    {
        ListNode *next=l;
        ListNode *prv=NULL;
        ListNode *cur=l;
        while(cur!=NULL)
        {
            next = cur->next;
            cur->next = prv;
            prv=cur;
            cur=next;
        }
        return prv;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1 = reverse(l1);
        l2 = reverse(l2);
        int carry=0;
        int count=0;
        ListNode *head;
        ListNode *temp;
        while(l1!=NULL || l2!=NULL)
        {
            if(l1==NULL)
            {
                int sum = l2->val+carry;
                carry=sum/10;
                sum=sum%10;
                if(count==0)
                {
                    ListNode *tem = new ListNode(sum);
                    head=tem;
                    temp=head;
                    count++;
                }
                else
                {
                    ListNode *tem = new ListNode(sum);
                    temp->next=tem;
                    temp=tem;
                }
                l2=l2->next;
            }
            else if(l2==NULL)
            {
                int sum = l1->val+carry;
                carry=sum/10;
                sum=sum%10;
                if(count==0)
                {
                    ListNode *tem = new ListNode(sum);
                    head=tem;
                    temp=head;
                    count++;
                }
                else
                {
                    ListNode *tem = new ListNode(sum);
                    temp->next=tem;
                    temp=tem;
                }
                l1=l1->next;
            }
            else
            {
                int sum = l1->val+l2->val+carry;
                carry=sum/10;
                sum=sum%10;
                if(count==0)
                {
                    ListNode *tem = new ListNode(sum);
                    head=tem;
                    temp=tem;
                    count++;
                }
                else
                {
                    ListNode *tem = new ListNode(sum);
                    temp->next=tem;
                    temp=tem;
                }
                l1 = l1->next;
                l2 = l2->next;
            }
        }
        if(carry>0)
            {
                ListNode *tem = new ListNode(carry);
                temp->next=tem;
                temp=tem;
            }
        head = reverse(head);
        return head;
    }
};