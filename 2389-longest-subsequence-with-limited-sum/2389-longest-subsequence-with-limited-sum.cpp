class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<int>v;
        vector<int>ans;
        int sum=0;
        for(int i=0; i<n; i++)
        {
            sum+=nums[i];
            v.push_back(sum);
        }
        for(int i=0; i<queries.size(); i++)
        {
            int cnt=0;
            for(int j=0; j<n; j++)
            {
                if(v[j]<=queries[i])
                {
                    cnt++;
                }
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};