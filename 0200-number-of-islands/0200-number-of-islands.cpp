class Solution {
public:
    bool isvalid(int i,int j,int n,int m,vector<vector<char>>& grid)
    {
        if(i>=0 and j>=0 and i<n and j<m and grid[i][j]=='1')
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void numIslandsRec(int i,int j,int n,int m,vector<vector<char>>& grid)
    {
        grid[i][j]='0';
        if(isvalid(i,j+1,n,m,grid))
        {
            numIslandsRec(i,j+1,n,m,grid);
        }
        if(isvalid(i+1,j,n,m,grid))
        {
            numIslandsRec(i+1,j,n,m,grid);
        }
        if(isvalid(i-1,j,n,m,grid))
        {
            numIslandsRec(i-1,j,n,m,grid);
        }
        if(isvalid(i,j-1,n,m,grid))
        {
            numIslandsRec(i,j-1,n,m,grid);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int ans=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(grid[i][j]=='1')
                {
                    ans++;
                    numIslandsRec(i,j,n,m,grid);
                }
            }
        }
        return ans;
    }
};