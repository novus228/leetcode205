class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        //sort(stones.begin(),stones.end());
        for(long int i=stones.size()-2;i>=0;i--)
        {
            sort(stones.begin(),stones.end());
            stones[i] = stones[i+1]-stones[i];
        }
        return stones[0];
    }
};