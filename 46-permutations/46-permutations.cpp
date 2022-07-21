class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> path;
        vector<bool> v(nums.size(),false);
        df(nums,path,v);
        return ans;
    }
    
    void df(vector<int> &nums,vector<int> &path,vector<bool> &v)
    {
        if(path.size()==nums.size())
        {
            ans.push_back(path);
            return;
        }
        for(long int i=0;i<nums.size();i++)
        {
            if(v[i]==false)
            {
                v[i]=true;
                path.push_back(nums[i]);
                df(nums,path,v);
                path.pop_back();
                v[i]=false;
            }
        }
    }
};