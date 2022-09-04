class Solution {
public:
    set<vector<int>> ans;
    void recur(vector<int>& nums,int cur,vector<int> t,int com)
    {
        if(com==cur)
        {
            sort(t.begin(),t.end());
            ans.insert(t);
            return;
        }
        recur(nums,cur+1,t,com);
        t.push_back(nums[cur]);
        recur(nums,cur+1,t,com);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int num=nums.size();
        vector<int> t;
        recur(nums,0,t,num);
        vector<vector<int>> a;
        for(auto it:ans)
        {
            a.push_back(it);
        }
        return a;
    }
};