class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> v;
        long int l = 0;
        long int h = numbers.size()-1;
        while(l<=h)
        {
            if(numbers[l]+numbers[h]==target)
            {
                v.push_back(l+1);
                v.push_back(h+1);
                return v;
            }
            else if(numbers[l]+numbers[h]>target)
                h--;
            else
                l++;
        }
        return v;
    }
};