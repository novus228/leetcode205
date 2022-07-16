class Solution {
public:
    int search(vector<int>& nums, int target) {
        long int l=0;
        long int h=nums.size()-1;
        long int mid;
        while(l<=h)
        {
            mid = (l+h)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>target)
                h = mid - 1;
            else
                l = mid + 1;
        }
        return -1;
    }
};