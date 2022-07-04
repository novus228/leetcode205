class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        long int count=0;
        for(long int i=m;i<m+n;i++)
        {
            nums1[i]=nums2[count];
            count++;
        }
        sort(nums1.begin(),nums1.end());
    }
};