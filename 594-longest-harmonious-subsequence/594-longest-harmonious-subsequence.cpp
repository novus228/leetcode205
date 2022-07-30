class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int> m;
        int ans = 0;
        for(long int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        for(auto i: m)
        {
            auto it = m.find(i.first+1);
            if(it!=m.end())
            {
                ans = max(ans,i.second+it->second);
            }
        }
        return ans;
    }
};