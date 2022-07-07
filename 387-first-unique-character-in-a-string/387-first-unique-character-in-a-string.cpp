class Solution {
public:
    int firstUniqChar(string s) {
        long int j;int ans;
        map<char,int> m;
        for(long int i=0;i<s.size();i++)
        {
            //cout<<s[i]<<" ";
            if(m[s[i]]>=1)
            {
                //cout<<"here"<<" ";
                m[s[i]]+=1;
            }
            else
                m[s[i]]=1;
        }
        for(long int i=0;i<s.size();i++)
        {
            cout<<m[s[i]]<<" ";
            if(m[s[i]]==1)
                return i;
        }
        return -1;
    }
};