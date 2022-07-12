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
    bool isPalindrome(ListNode* head) {
        long int count=0;
        ListNode *temp=head;
        stack<int> s;
        long int i;
        while(head!=NULL)
        {
            head=head->next;
            count+=1;
        }
        for(i=0;i<count/2;i++)
        {
            s.push(temp->val);
            temp=temp->next;
        }
        if(count%2!=0)
        {
            i++;
            temp=temp->next;
        }
        while(i<count)
        {
            long int num = s.top();
            s.pop();
            if(temp->val==num)
            {
                temp=temp->next;
                i++;
                continue;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};