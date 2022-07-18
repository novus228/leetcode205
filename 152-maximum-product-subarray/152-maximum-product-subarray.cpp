class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxx=nums[0];
        int mf = nums[0];
        int mif = nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<0)
                swap(mf,mif);
            mf = max(nums[i], nums[i]*mf);
            mif = min(nums[i],nums[i]*mif);
            maxx = max(maxx,mf);
        }
        return maxx;
    }
};