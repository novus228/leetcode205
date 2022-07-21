class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        long int n = nums.size()/3;
        unordered_map<int,int> m;
        vector<int> v;
        for(long int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
            if(m[nums[i]]==n+1)
            {
                v.push_back(nums[i]);
            }
        }
        return v;
    }
};