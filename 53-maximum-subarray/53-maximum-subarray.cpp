class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxx = nums[0];
        for(long int i=1;i<nums.size();i++)
        {
            if(nums[i-1]>0)
            {
                nums[i] = nums[i]+nums[i-1];
            }
            maxx = max(nums[i],maxx);
        }
        return maxx;
    }
};