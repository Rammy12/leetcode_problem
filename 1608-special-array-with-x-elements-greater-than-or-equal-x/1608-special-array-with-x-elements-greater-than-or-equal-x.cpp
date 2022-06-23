class Solution {
public:
    int specialArray(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        int sz = nums.size();
        if (nums[0]>=sz) 
            {
                 return sz;
            }
        for(int i=1; i<sz; ++i)
            if(nums[i] >= sz-i && nums[i-1] < sz-i)
                return sz-i;
        return -1;
    
        
    }
};