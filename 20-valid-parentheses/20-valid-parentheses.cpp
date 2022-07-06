class Solution {
public:
    bool isValid(string s) {
        vector<char> v;
        int count=0;
        for(long int i=0;i<s.size();i++)
        {
            if(s[i]=='('||s[i]=='{'||s[i]=='[')
            {
                v.push_back(s[i]);
            }
            else
            {
                //cout<<cc<<"|";
                if(v.empty())
                {
                    return false;
                }
                char cc = v.back();
                if(s[i]==')'&& cc=='(')
                {
                    v.pop_back();
                }
                else if(s[i]=='}'&& cc=='{')
                {
                    v.pop_back();
                }
                    
                else if(s[i]==']'&& cc=='[')
                {
                    v.pop_back();
                }
                else
                {
                    return false;
                }
            } 
        }
        if(v.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};