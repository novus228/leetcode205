class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int,int> m;
        for(auto it : nums)
        {
            m[it]=1;
        }
        long int s = nums.size();
        long int i=1;
        while(m.count(i))
        {
            i++;
        }
        return i;
        
    }
};