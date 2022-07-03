class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for( auto it : matrix)
        {
        for(int data:it)
        {
            if(data==target)
            {
                return true;
            }
        }
        }
        return false;   
    }
};