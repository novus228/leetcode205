class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        long int cm=0;
        long int cn=0;
        vector<int> ne;
        while(cm!=m || cn!=n)
        {
            if(cm==m)
            {
                ne.push_back(nums2[cn]);
                cn++;
            }
            else if(cn==n)
            {
                ne.push_back(nums1[cm]);
                cm++;
            }
            else
            {
            if(nums1[cm]>nums2[cn])
            {
                ne.push_back(nums2[cn]);
                cn++;
            }
            else
            {
                ne.push_back(nums1[cm]);
                cm++;
            }
            }
        }
        nums1 = ne;
    }
};