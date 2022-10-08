class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int presum=0;
        for(int i=0; i<n; i++)
        {
            sum+=nums[i];
        }
        for(int i=0; i<n; i++)
        {
            sum-=nums[i];
            if(sum==presum)
            {
                return i;
            }
            presum+=nums[i];
        }
        return -1;
    }
};