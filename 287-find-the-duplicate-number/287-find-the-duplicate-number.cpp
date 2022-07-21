class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> v(nums.size(),0);
        for(long int i=0;i<nums.size();i++)
        {
            if(v[nums[i]]>=1)
                return nums[i];
            else
                v[nums[i]]+=1;
        }
        return -1;
        
    }
};