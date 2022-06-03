class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int>ans;
    ans.push_back(first);
    int put=first^encoded[0];
    ans.push_back(put);
    for(int i=1; i<encoded.size(); i++)
    {
        put=put^encoded[i];
        ans.push_back(put);
    }
    return ans;
    }
};