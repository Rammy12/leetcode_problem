class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        int minLength=n+1;
        int start=0;
        
        for(int i=0; i<n; i++)
        {
            sum+=nums[i];
            while(sum>=target)
            {
                minLength=min(minLength,i+1-start);
                sum-=nums[start];
                start++;
            }
        }
        if(minLength==n+1)
        {
            return 0;
        }
        return minLength;
        
    }
};