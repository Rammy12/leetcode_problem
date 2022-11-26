class Solution {
public:
    int memo[50001] = {};
    int dfs(vector<vector<int>>& comb, int pos, int last){
        if(pos >= comb.size()) return 0; 
        if(comb[pos][0] < last) return dfs(comb, pos+1, last); 
        if(memo[pos] != -1) return memo[pos]; 
        int ans = 0;
        ans = max(dfs(comb, pos+1, comb[pos][1])+comb[pos][2], dfs(comb, pos+1, 0)); 
        return memo[pos] = ans;
    }
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        memset(memo, -1, sizeof memo);
        vector<vector<int>> comb; 
        for(int i = 0; i < startTime.size(); i++) comb.push_back({startTime[i], endTime[i], profit[i]});
        sort(comb.begin(), comb.end());
        return dfs(comb, 0, 0);
    }
};