class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int n=mat.size();
        int m=mat[0].size();
        if(m*n!=r*c)
        {
            return mat;
        }
        vector<vector<int>>ans(r,vector<int>(c));
        int row=0;
        int col=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                ans[row][col]=mat[i][j];
                col++;
                
                if(col==c)
                {
                    row++;
                    col=0;
                }
            }
        }
        return ans;
    }
};