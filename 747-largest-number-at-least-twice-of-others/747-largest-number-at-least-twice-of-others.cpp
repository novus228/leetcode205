class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxx = nums[0];
        long int ind=0;
        for(long int i=0;i<nums.size();i++)
        {
            if(maxx<nums[i])
            {
                maxx=nums[i];
                ind=i;
            }
        }
        for(long int i=0;i<nums.size();i++)
        {
            if(i==ind)
                continue;
            else if(nums[i]*2>nums[ind])
                return -1;
        }
        return ind;
        
    }
};