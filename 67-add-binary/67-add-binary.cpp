class Solution {
public:
    string addBinary(string a, string b) {
        long int sa=a.size()-1;
        long int sb=b.size()-1;
        string s;
        int carry=0;
        while(sa>=0 || sb>=0)
        {
            int sum=carry;
            if(sa>=0) sum+= a[sa--] - '0';
            if(sb>=0) sum+= b[sb--] - '0';
            if(sum>1)
            {
                carry=1;
            }
            else
            {
                carry=0;
            }
            s+=to_string(sum%2);
        }
        if(carry)
        {
            s+=to_string(carry);
        }
        reverse(s.begin(),s.end());
        return s;
    }
};