class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //vector<char> c{'1','2','3','4','5','6','7','8','9','.'};
        for(long int i=0;i<9;i++)
        {
            map<char,int> m;
            for(long int j=0;j<9;j++)
            {
                if(board[i][j]=='.')
                        {
                            continue;
                        }
                if(m[board[i][j]]==1)
                    return false;
                else
                {
                    m[board[i][j]]=1;
                }
            }
        }
        for(long int i=0;i<9;i++)
        {
            map<char,int> m1;
            for(long int j=0;j<9;j++)
            {
                //cout<<"i"<<i<<endl;
                if(board[j][i]=='.')
                        {
                            continue;
                        }
                //cout<<board[j][i]<<" ";
                //cout<<m1[board[j][i]]<<" ";
                if(m1[board[j][i]]==1)
                {
                  //  cout<<m1[board[j][i]]<<endl;
                    return false;
                }
                else
                {
                    m1[board[j][i]]=1;
                    //cout<<m1[board[j][i]]<<endl;
                }
            }
            //cout<<endl;
        }
        for(long int i=0;i<9;i=i+3)
        {
            for(long int j=0;j<9;j=j+3)
            {
                map<char,int> m2;
                for(long int l=i;l<i+3;l++)
                {
                    for(long int k=j;k<j+3;k++)
                    {
                        //cout<<l<<" "<<k<<endl;
                        if(board[l][k]=='.')
                            continue;
                        if(m2[board[l][k]]==1)
                        {
                            //cout<<board[l][k]<<":";
                            //cout<<m2[board[l][k]]<<" ";
                            return false;
                        }
                            
                        else
                        {
                            //cout<<board[l][k]<<":";
                            //cout<<m2[board[l][k]]<<" ";
                            m2[board[l][k]]=1;
                        }
                    }
                }
            }
        }
        return true;
        
    }
};