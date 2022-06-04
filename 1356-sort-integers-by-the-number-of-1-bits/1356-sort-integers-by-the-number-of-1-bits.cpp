class Solution {
public:
    int countSetBits(int n)
{
    int count=0;
    while(n)
    {
        n=n&n-1;
        count++;
    }
    return count;
}
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>>ans;
        for(auto i:arr)
        {
            ans.push_back({countSetBits(i),i});
        }
        sort(ans.begin(),ans.end());
        vector<int>res;
        for(auto a:ans)
        {
            res.push_back(a.second);
        }
        return res;
        
        
    }
};