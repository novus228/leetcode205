class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> v;
        for(long int i=0;i<s.size();i++)
        {
            if(isalpha(s[i])||isdigit(s[i]))
            {
                v.push_back(tolower(s[i]));
            }
        }
        if(v.size()==1)
            return true;
        long int j;
        stack<char> st;
        long int num = v.size();
        if(num%2==0)
        {
            for(j=0;j<num/2;j++)
            {
                st.push(v[j]);
            }
            while(j!=num)
            {
                char ch = st.top();
                st.pop();
                if(v[j]==ch)
                {
                    j++;
                    continue;
                }
                else
                    return false;
            }
            return true;
        }
        for(j=0;j<num/2;j++)
            {
                st.push(v[j]);
            }
        j++;
            while(j!=num)
            {
                char ch = st.top();
                st.pop();
                if(v[j]==ch)
                {
                    j++;
                    continue;
                }
                else
                    return false;
            }
        return true;
    }
};