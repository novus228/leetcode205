class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        //if(num)
        auto it = find(nums.begin(),nums.end(),target);
        if(it == nums.end())
        {
            vector<int> v;
            v.push_back(-1);
            v.push_back(-1);
            return v;
        }
            long int st= it - nums.begin();
            long int end=st;
            if(end == nums.size()-1)
                {
                    vector<int> v;
                v.push_back(st);
                v.push_back(end);
                return v;   
                }
            while(nums[end+1]==nums[st])
            {
                end++;
                if(end == nums.size()-1)
                {
                    break;
                }
            }
            vector<int> v;
            v.push_back(st);
            v.push_back(end);
            return v;        
    }
};