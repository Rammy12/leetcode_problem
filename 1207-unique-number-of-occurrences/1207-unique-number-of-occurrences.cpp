class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>umap;
        int n=arr.size();
        for(int i=0; i<n;i++)
        {
            umap[arr[i]]++;
        }
        unordered_set<int>s;
        for(auto x:umap)
        {
            s.insert(x.second);
        }
        return umap.size()==s.size();
    }
};