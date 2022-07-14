class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        long int carry=0;
        long int n = digits.size();
        n--;
        carry = (digits[n]+1)/10;
        digits[n]= (digits[n]+1)%10;
        while(carry==1 && n!=0)
        {
            n--;
            carry = (digits[n]+1)/10;
            digits[n]= (digits[n]+1)%10;
        }
        if(carry>0)
        {
            vector<int> v;
            v.push_back(carry);
            for(long int i=0;i<digits.size();i++)
            {
                v.push_back(digits[i]);
            }
            return v;
        }
        return digits;
        
    }
};