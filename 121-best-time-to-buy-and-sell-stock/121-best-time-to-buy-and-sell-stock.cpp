class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = INT_MAX;
        long int o=0,p=0;
        for(long int i=0;i<prices.size();i++)
        {
            if(prices[i]<min)
            {
                min = prices[i];
            }
            p = prices[i]-min;
            if(o<p)
            {
                o=p;
            }
        }
        return o;
        
    }
};