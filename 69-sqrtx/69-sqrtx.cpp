class Solution {
public:
    int mySqrt(int x) {
        vector<int> v;
        long int i=1;
        while(i*i<=x)
        {
            v.push_back(i*i);
            i+=1;
        }
        return v.size();
    }
};