class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        long int n = nums.size();
        vector<int> v;
        for(long int i=0;i<n-1;i++)
        {
            for(long int j=i+1;j<n;j++)
            {
                long int sum=nums[i]+nums[j];
                if(sum==target)
                {
                    v.push_back(i);
                    v.push_back(j);
                    return v;
                }
                else
                {
                    continue;
                }
            }
        }  
        return v;
    }
};