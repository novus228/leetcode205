class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_map<int,int> i;
        unordered_map<int,int> j;
        for(long int a=0;a<matrix.size();a++)
        {
            for(long int b=0;b<matrix[0].size();b++)
            {
                if(matrix[a][b]==0)
                {
                    i[a]++;
                    j[b]++;
                }
            }
        }
        for(auto it: i)
        {
            long int a = it.first;
            for(long int b=0;b<matrix[0].size();b++)
            {
                matrix[a][b]=0;
            }
        }
        for(auto it: j)
        {
            long int b = it.first;
            for(long int a=0;a<matrix.size();a++)
            {
                matrix[a][b]=0;
            }
        }
    }
};