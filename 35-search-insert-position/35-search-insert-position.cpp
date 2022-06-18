class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int str=0;
        int end=n-1;
        while(str<=end)
        {
            int mid=(str+end)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]>target)
            {
                end=mid-1;
            }
            else
            {
                str=mid+1;
            }
        }
        return str;
        
    }
};