class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        long int o,e;
        long int count=0;
        long int i=0;
        while(i!=nums.size())
        {
            if(i%2==0)
            {
                if(nums[i]%2!=0)
                {
                    long int a=i;
                    while(a!=nums.size())
                    {
                        a++;
                        if(nums[a]%2==0 && a%2!=0)
                            break;
                    }
                    swap(nums[a],nums[i]);
                }
            }
            else
            {
                if(nums[i]%2==0)
                {
                    long int a=i;
                    while(a!=nums.size())
                    {
                        a++;
                        if(nums[a]%2!=0 && a%2==0)
                            break;
                    }
                    //cout<<nums[a]<<endl;
                    swap(nums[a],nums[i]);
                    //cout<<nums[i]<<endl;
                }
            }
            i++;
        }
        return nums;
        
    }
};