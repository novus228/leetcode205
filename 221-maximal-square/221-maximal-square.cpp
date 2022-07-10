class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        if(matrix.size()==0)
            return 0;
        int r = matrix.size();
        int c = matrix[0].size();
        int m = 0;
        vector<vector<int>> v(r+1,vector<int>(c+1,0));
        
        for(long int i=1;i<=r;++i)
        {
            for(long int j=1;j<=c;++j)
            {
                if(matrix[i-1][j-1]=='1')
                {
                    v[i][j] = min({v[i-1][j-1],v[i][j-1],v[i-1][j]})+1;
                    m = max(m,v[i][j]);
                }
            }
        }
        return m*m;
    }
};