class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int maxsum=nums[0];
        int currsum=nums[0];
        for(int i=1; i<n; i++)
        {
            if(currsum<0)
            {
                currsum=0;
            }
            currsum+=nums[i];
            if(currsum>maxsum)
            {
                maxsum=currsum;
            } 
        }
        return maxsum;
        
    }
};