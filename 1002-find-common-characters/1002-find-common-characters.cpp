class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> h1(26,0);
        vector<int> h2(26,0);
        for(auto it : words[0])
        {
            h1[it - 'a']++;
        }
        for(long int i=1;i<words.size();i++)
        {
            for(auto it : words[i])
            {
                h2[it - 'a']++;
            }
            for(long int i=0;i<26;i++)
            {
                h1[i]=min(h1[i],h2[i]);
                h2[i]=0;
            }
        }
        vector<string> v;
        for(long int i=0;i<26;i++)
        {
            if(h1[i]>0)
            {
                int count=h1[i];
                while(count--)
                {
                    char ch='a'+i;
                    string s;
                    s = ch;
                    v.push_back(s);
                }
            }
        }
        return v;
    }
};