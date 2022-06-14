class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ss="";
        //cout<<strs[1][0];
        if(strs.size()==1)
        {
            return strs[0];
        }
        else
        {
        for(int j=0;j<(strs[0].size());j++)
        {
            for(int i=0;i<strs.size()-1;i++)
            {
                if(strs[i][j]==strs[i+1][j])
                {
                    if(i+1==strs.size()-1)
                    {
                        ss.push_back(strs[i][j]);
                        //cout<<strs[i][j];
                    }
                    else
                    {
                        continue;
                    }
                }
                else
                {
                    return ss;
                }
                
            }
        }
        return ss;
    }
    }
};