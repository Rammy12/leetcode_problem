class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
        set<int>ans;
        
        for(int i=0; i<n; i++)
        {
            ans.insert(nums[i]);
        }
        if(ans.size()==n)
        {
            return false;
        }
        else
        {
            return true;
        }
        
    }
};