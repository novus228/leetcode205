class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        long int i=0,zero=0,j=0;
        long int n = nums.size();
        if(n==1)
            return;
        while(i!=n || j!=n)
        {
            if(i<n && nums[i]==0)
            {
                zero++;
                i++;
                continue;
            }
            else 
            {
                if(i==n)
                {
                    while(j!=n)
                        nums[j++]=0;
                    break;
                }
                nums[j++]=nums[i++];
            }
        }
        
    }
};