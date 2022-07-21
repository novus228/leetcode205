class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for(long int i=0;i<matrix.size();i++)
        {
            for(long int j=i+1;j<matrix.size();j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        long int n=matrix.size()-1;
        for(long int i=0;i<matrix.size();i++)
            {
                for(long int j=0;j<matrix.size()/2;j++)
                {
                    swap(matrix[i][j],matrix[i][n-j]);
                }
            }
    }
};