class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v(numRows);
        for(long int i=0;i<numRows;i++)
        {
            v[i] = vector<int> (i+1,1);
            for(long int j=1;j<i;j++)
            {
                v[i][j]= v[i-1][j]+v[i-1][j-1];
            }
        }
        return v;
    }
};