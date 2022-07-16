class Solution {
public:
    bool validPalindrome(string s) {
        long int num = s.size();
        long int st=0;
        long int end=num-1;
        //cout<<num<<endl;
        long int count=0;
        while(st<end)
        {
            if(s[st]==s[end])
            {
                st++;
                end--;
            }
            else
            {
                st++;
                count+=1;
                if(count>1)
                    break;
            }
        }
        st=0;
        end=num-1;
        long int count2=0;
        while(st<end)
        {
            if(s[st]==s[end])
            {
                st++;
                end--;
            }
            else
            {
                end--;
                count2+=1;
                if(count2>1)
                    break;
            }
        }
        if(count==0 || count2==0)
            return true;
        if(count==1 || count2==1)
            return true;
        return false;
    }
};