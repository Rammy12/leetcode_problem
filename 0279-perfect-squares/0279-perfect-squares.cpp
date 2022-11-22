class Solution {
public:
    int numSquares(int n) {
        if(n == 10000)
            return 1;
        vector<int>dp;
        vector<int>sd(10001,INT_MAX);
        queue<int>q;
        for(int i=1;i<101;i++)
        {
            dp.push_back(i*i);
            sd[i*i] = 1;
            q.push(i*i);
        }
        while(!q.empty())
        {
            int node = q.front();
            q.pop();
            for(auto i:dp)
            {
                int newnode = node + i;
                if(newnode <= n && sd[newnode] > sd[node] + 1)
                {
                    sd[newnode] = sd[node] + 1;
                    q.push(newnode);
                }
            }
        }
        return sd[n];
    }
};