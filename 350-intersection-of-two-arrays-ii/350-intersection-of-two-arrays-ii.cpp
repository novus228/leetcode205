class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> sol;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());

        for(long int i=0;i<nums1.size();i++)
        {
            for(long int j=0;j<nums2.size();j++)
            {
                if(nums1[i]==nums2[j])
                {
                    nums2[j]=0;
                    sol.push_back(nums1[i]);
                    break;
                }
            }
        }
        return sol;
        
    }
};