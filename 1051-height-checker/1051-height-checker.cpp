class Solution {
public:
    int heightChecker(vector<int>& heights) {
        long int ans=0;
        vector<int> v = heights;
        sort(v.begin(),v.end());
        for(long int i=0;i<v.size();i++)
        {
            if(v[i]!=heights[i])
                ans++;
        }
        return ans;
    }
};