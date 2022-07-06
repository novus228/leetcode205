class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n;
        map<int,int> m;
        for(auto data:nums)
        {
            if(m[data]==1)
            {
                m[data]+=1;
            }
            else
            {
            m[data]=1;
            }
        }
        for(auto data:nums)
        {
            if(m[data]==1)
            {
                n=data;
                return data;
            }
        }
        return n;
    }
};