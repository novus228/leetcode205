class Solution {
public:
    int lengthOfLastWord(string s) {
        long int i=0;
        long int count=0;
        vector<int> v;
        while(s[i] != '\0')
        {
            if(s[i] == ' ')
            {
                //cout<<count<<" ";
                if(count!=0)
                    v.push_back(count);
                count=0;
            }
            else
            {
                count++;
            }
            i++;
        }
        if(count!=0)
            v.push_back(count);
        if(count==0 && v.empty())
            return 0;
        long int num = v.size()-1;
        return v[num];
        
    }
};