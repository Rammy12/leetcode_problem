class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        bool ans=false;
        int i=0;
        int j=m-1;
        while(i<n and j>=0)
        {
            if(matrix[i][j]==target)
            {
                ans=true;
            }
            if(matrix[i][j]>target)
            {
                j--;
            }
            else
            {
                i++;
            }
            
        }
        return ans;
        
    }
};