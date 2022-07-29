class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long int l=0,r=nums.size()-1;
        long int min=nums[l],mm=nums[r];
                vector<int> ans;
        ans.push_back(mm);
        while(l<r)
        {
            if(min<mm)
            {
                l++;
                min = min + nums[l];
            }
            else
            {
                r--;
                mm+=nums[r];
                ans.push_back(nums[r]);
            }
        }
        return ans;
    }
};