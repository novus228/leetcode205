class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        long int maxone=0;
        long int one=0;
        for(long int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                one++;
                //cout<<one<<endl;
            }
            else
            {
                //cout<<one<<endl;
                //cout<<maxone<<endl;
                if(one>maxone)
                    maxone=one;
                one=0;
            }
        }
        if(one>maxone)
            maxone=one;
        return maxone;
    }
};