class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        long int p=1,v=1;
        for(long int i=1;i<nums.size();i++)
        {
            if(nums[i]>nums[i-1])p = v+1;
            else if(nums[i]<nums[i-1])v = p+1;
        }
        return max(p,v);
    }
};