class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_map<int,int> m;
        for(long int i=0;i<candyType.size();i++)
        {
            m[candyType[i]]++;
        }
        long int allow = candyType.size()/2;
        if(allow<m.size())
            return allow;
        return m.size();
    }
};