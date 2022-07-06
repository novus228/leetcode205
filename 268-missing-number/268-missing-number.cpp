class Solution {
public:
    int missingNumber(vector<int>& nums) {
        long int n = nums.size();
        long int sum=0,s=0;
        for(long int i=0;i<=nums.size();i++)
        {
            sum+=i;
        }
        for(long int i=0;i<nums.size();i++)
        {
            s+=nums[i];
        }
        return sum-s;
    }
};