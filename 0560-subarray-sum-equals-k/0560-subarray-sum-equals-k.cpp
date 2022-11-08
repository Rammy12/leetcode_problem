class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int cnt=0;
        int sum=0;
        unordered_map<int,int>presum;
        for(int i=0; i<n; i++)
        {
            sum+=nums[i];
            if(sum==k)
            {
                cnt++;
            }
            if(presum.find(sum-k)!=presum.end())
            {
                cnt+=presum[sum-k];
            }
            presum[sum]++;
        }
        return cnt;
    }
};