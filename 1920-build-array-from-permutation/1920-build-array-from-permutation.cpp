class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> t = nums;
        vector<int> ans;
        for(long int i=0;i<nums.size();i++)
        {
            ans.push_back(t[nums[i]]);
        }
        return ans;
        
    }
};