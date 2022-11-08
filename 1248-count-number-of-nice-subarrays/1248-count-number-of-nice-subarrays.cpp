class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        for(int i=0; i<n; i++)
        {
            if(nums[i]%2==0)
            {
                nums[i]=0;
            }
            else
            {
                nums[i]=1;
            }
        }
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