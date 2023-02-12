//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    /*int solveRec(int n,int a[],int curr,int prev)
    {
        //base case
        if(curr==n)
        {
            return 0;
        }
        int include=0;
        //include 
        if(prev==-1 or a[curr]>a[prev])
        {
            include=1+solveRec(n,a,curr+1,curr);
        }
        int exclude=0+solveRec(n,a,curr+1,prev);
        return max(include,exclude);
    }*/
    int solveMem(int n,int a[],int curr,int prev,vector<vector<int>>&dp)
    {
        //base case
        if(curr==n)
        {
            return 0;
        }
        if(dp[curr][prev+1]!=-1)
        {
            return dp[curr][prev+1];
        }
        int include=0;
        //include 
        if(prev==-1 or a[curr]>a[prev])
        {
            include=1+solveMem(n,a,curr+1,curr,dp);
        }
        int exclude=0+solveMem(n,a,curr+1,prev,dp);
        return dp[curr][prev+1]=max(include,exclude);
    }
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
       // your code here
       //return solveRec(n,a,0,-1);
       vector<vector<int>>dp(n,vector<int>(n+1,-1));
       return solveMem(n,a,0,-1,dp);
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t,n;
    cin>>t;
    while(t--)
    {
        //taking size of array
        cin>>n;
        int a[n];
        
        //inserting elements to the array
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        //calling method longestSubsequence()
        cout << ob.longestSubsequence(n, a) << endl;
    }
}

// } Driver Code Ends