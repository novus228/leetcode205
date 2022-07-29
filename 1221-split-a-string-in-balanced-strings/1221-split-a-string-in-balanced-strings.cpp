class Solution {
public:
    int balancedStringSplit(string s) {
        long int num=0;
        long int lr=0;
        unordered_map<char,int> m;
        for(long int i=0;i<s.size();i++)
        {
            m[s[i]]++;
            if(m['L']==m['R'])
            {
                num++;
                m['L']=0;
                m['R']=0;
            }
        }
        return num;
    }
};