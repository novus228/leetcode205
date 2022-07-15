class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        long int row = grid.size();
        long int col = grid[0].size();
        //vector<vector<int>> v(row+2,vector<int> (col+2,0));
        long int zero=0;
        for(long int i=0;i<row;i++)
        {
            for(long int j=0;j<col;j++)
            {
                if(grid[i][j]==1)
                {
                    if(i==0 && j==0)
                    {
                        zero+=2;
                        //continue;
                    }
                    else if(i==0 || j==0)
                    {
                        zero++;
                    }
                    if(i==row-1 && j==col-1)
                    {
                        zero+=2;
                        //continue;
                    }
                    else if(i==row-1 || j==col-1)
                    {
                        zero++;
                    }
                        if(i>0 && grid[i-1][j]==0)
                        {
                            zero++;
                        }
                        if(j>0 && grid[i][j-1]==0)
                        {
                            zero++;
                        }
                        if(i<row-1 && grid[i+1][j]==0)
                        {
                            zero++;
                        }
                        if(j<col-1 && grid[i][j+1]==0)
                        {
                            zero++;
                        }
                }
                else
                {
                    continue;
                }
            }
        }
        return zero;
        
    }
};