class Solution {
public:
    vector<vector<int>> ans;
    void recur(vector<int>& nums,int cur,vector<int> t,int com)
    {
        if(cur==com)
        {
            ans.push_back(t);
            return;
        }
        recur(nums,cur+1,t,com);
        t.push_back(nums[cur]);
        recur(nums,cur+1,t,com);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int num=nums.size();
        vector<int> t;
        recur(nums,0,t,num);
        return ans;
    }
};