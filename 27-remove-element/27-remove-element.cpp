class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int right = nums.size()-1,n=nums.size(),cnt=n;
        for(int i=0;i<n && i<=right;i++)
        {
            while(right>=0 && nums[right]==val)
            {
                --right;
                --cnt;
            }
            if(nums[i]==val && i<=right)
            {
                swap(nums[i],nums[right--]);
                --cnt;
            }
        }
        return cnt;
    }
};