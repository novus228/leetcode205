class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        long int count=1,ma=0;
        for(long int i =1;i<nums.size();i++)
        {
            if(nums[i]>nums[i-1])
            {
                count++;
            }
            else
            {
                ma = max(ma,count);
                count=1;
            }
        }
        ma = max(ma,count);
        return ma;
    }
};