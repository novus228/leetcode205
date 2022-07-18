class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int carry = 0;
        vector<int> v;
        stack<int> s;
        long int n = num.size();
        while(k!=0 || n!=0)
        {
            if(n==0)
            {
                long int a = carry+(k%10);
                carry = a/10;
                s.push(a%10);
                k = k/10;
            }
            else
            {
                n--;
                long int a = num[n]+(k%10)+carry;
                //cout<<a<<" ";
                carry = a/10;
                //cout<<a%10<<endl;
                s.push(a%10);
                k = k/10;
            }
        }
        if(carry>0)
            s.push(carry);
        cout<<s.size()<<endl;
        while(!s.empty())
        {
            v.push_back(s.top());
            s.pop();
        }
        return v;
    }
};