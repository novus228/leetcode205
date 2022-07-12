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
    void reorderList(ListNode* head) {
        vector<ListNode*> v;
        ListNode* t=head;
        if(head==NULL)
        {
            return;
        }  
        while(t!=NULL)
        {
            v.push_back(t);
            t=t->next;
        }
        ListNode* temp=head;
        if(v.size()%2==0)
        {
            for(long int i=0;i<v.size()/2;i++)
            {
                if(i==v.size()-i-1)
                {
                    temp->next=v[i];
                    temp=v[i];
                    continue;
                }
                if(i==0)
                {
                temp=v[i];
                temp->next=v[v.size()-i-1];
                temp=v[v.size()-i-1];
                }
                else
                {
                    temp->next=v[i];
                    temp=v[i];
                    temp->next=v[v.size()-i-1];
                    temp=v[v.size()-i-1];
                }
            }
            temp->next=nullptr;
        }
        else
        {
            int num=v.size()/2;
            for(long int i=0;i<=v.size()/2;i++)
            {
                //cout<<i<<" ";
                if(i==v.size()-i-1)
                {
                    temp->next=v[i];
                    temp=v[i];
                    continue;
                }
                if(i==0)
                {
                temp=v[i];
                temp->next=v[v.size()-i-1];
                temp=v[v.size()-i-1];
                }
                else
                {
                    temp->next=v[i];
                    temp=v[i];
                    temp->next=v[v.size()-i-1];
                    temp=v[v.size()-i-1];
                }
            }
            temp->next=nullptr;
        }
    }
};