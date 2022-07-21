class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long int count=0,maxx=0;
        if(nums.size()==0)
            return 0;
        for(long int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
                continue;
            if(nums[i]+1==nums[i+1])
            {
                count+=1;
                maxx = max(maxx,count);
            }
            else
            {
                count=0;
            }
        }
        return maxx+1;
        
    }
};