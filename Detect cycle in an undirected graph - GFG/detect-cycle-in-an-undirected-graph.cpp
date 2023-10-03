//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  bool bfs(int node,vector<int> adj[],vector<bool>&visited,unordered_map<int,int>&parent)
  {
      queue<int>q;
      q.push(node);
      visited[node]=true;
      parent[node]=-1;
      while(!q.empty())
      {
          int frontNode=q.front();
          q.pop();
          for(auto x:adj[frontNode])
          {
              if(!visited[x])
              {
                  q.push(x);
                  visited[x]=true;
                  parent[x]=frontNode;
              }
              else if(visited[x]==true && x!=parent[frontNode])
              {
                  return true;
              }
              
          }
      }
      return false;
  }
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        vector<bool>visited(V,false);
        unordered_map<int,int>parent;
        for(int i=0; i<V; i++)
        {
            if(!visited[i])
            {
                bool ans=bfs(i,adj,visited,parent);
                if(ans)
                {
                    return true;
                }
            }
        }
        return false;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends