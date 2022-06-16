class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        auto it = find(nums.begin(),nums.end(),target);
        if(it!=nums.end())
        {
            int index = abs(nums.begin()-it);
            return index;
        }
        else
        {
            nums.push_back(target);
            sort(nums.begin(),nums.end());
            auto it = find(nums.begin(),nums.end(),target);
            int index = abs(nums.begin()-it);
            return index;
        }
    }
};