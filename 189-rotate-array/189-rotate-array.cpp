class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        long int count=0;
        k=k%nums.size();
        vector<int> v;
        for(long int i=nums.size()-k;i<nums.size();i++)
        {
            v.push_back(nums[i]);
        }
        count = nums.size()-1;
        long int j=nums.size()-k;
        while(j!=0)
        {
            j--;
            nums[count] = nums[j];
            count--;
        }
        for(long int i=0;i<v.size();i++)
        {
            nums[i]=v[i];
        }
        
    }
};