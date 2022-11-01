class Solution {
public:
    int solve(int i,int j,vector<vector<int>>& grid)
    {
        if(i>=grid.size())
        {
            return j;
        }
        if(grid[i][j]==1 and j+1<grid[0].size() and grid[i][j+1]==1)
        {
            return solve(i+1,j+1,grid);
        }else if(grid[i][j]==-1 and j-1>=0 and grid[i][j-1]==-1)
        {
            return solve(i+1,j-1,grid);
        }else if(grid[i][j]==1 and j+1>=grid[0].size())
        {
            return -1;
        }
        else
        {
            return -1;
        }
    }
    vector<int> findBall(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<int>ans(n);
        for(int i=0; i<n; i++)
        {
            ans[i]=solve(0,i,grid);
        }
        return ans;
    }
};