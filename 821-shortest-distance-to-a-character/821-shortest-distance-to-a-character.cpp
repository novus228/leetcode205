class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> ans;
        vector<int> target;
        for(long int i=0;i<s.size();i++)
        {
            if(s[i]==c)
                target.push_back(i);
        }
        if(target.size()==1)
        {
            for(long int i=0;i<s.size();i++)
            {
                ans.push_back(abs(i-target[0]));
            }
            return ans;
        }
        long int cu=0,n=1;
        for(long int i=0;i<s.size();i++)
        {
            if(i==target[n] && n<target.size()-1)
            {
                cu=n;
                n++;
            }
            if(abs(target[cu]-i)>abs(target[n]-i))
                ans.push_back(abs(target[n]-i));
            else
                ans.push_back(abs(target[cu]-i));
        }
        return ans;
    }
};