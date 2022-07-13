class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        long int i = 0;
        long int count=0;
        map<int,int> m;
        while(i!=nums.size())
        {
            if(m[nums[i]]==1)
            {
                i++;
            }
            else
            {
                m[nums[i]]=1;
                //cout<<i<<" ";
                //cout<<nums[i]<<endl;
                nums[count]=nums[i];
                count++;
                i++;
            }
        }
        cout<<count<<endl;
        return count;
    }
};