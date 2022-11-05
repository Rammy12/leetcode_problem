//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    bool isSafe(int x,int y,int n,vector<vector<bool>>&vis,vector<vector<int>>&arr)
    {
        if((x>=0 && x<n) and (y>=0 && y<n) and vis[x][y]!=1 and arr[x][y]==1)
        {
            return true;
        }
        return false;
    }
    void solve(vector<vector<int>> &m,int x,int y,int n,vector<vector<bool>>&visited,string path,vector<string>&ans)
    {
        //base case
        if(x==n-1 and y==n-1)
        {
            ans.push_back(path);
            return;
        }
        visited[x][y]=1;
        //down
        if(isSafe(x+1,y,n,visited,m))
        {
            solve(m,x+1,y,n,visited,path+'D',ans);
        }
        //left
        if(isSafe(x,y-1,n,visited,m))
        {
            solve(m,x,y-1,n,visited,path+'L',ans);
        }
        //Right
        if(isSafe(x,y+1,n,visited,m))
        {
            solve(m,x,y+1,n,visited,path+'R',ans);
        }
        //up
        if(isSafe(x-1,y,n,visited,m))
        {
            solve(m,x-1,y,n,visited,path+'U',ans);
        }
        visited[x][y]=0;
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string>ans;
        if(m[0][0]==0)
        {
            return ans;
        }
        vector<vector<bool>>visited(n,vector<bool>(n,0));
        string path="";
        solve(m,0,0,n,visited,path,ans);
        return ans;
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends