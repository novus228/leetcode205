class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        long int l=0;
        long int mid;
        long int h=nums.size()-1;
        while(l<=h)
        {
            mid = (l+h)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>target)
                h=mid-1;
            else
                l = mid + 1;
        }
        if(target>nums[mid])
            return mid+1;
        return mid;
    }
};