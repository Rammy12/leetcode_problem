class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        int dub=-1;
        int miss=-1;
        for(int i=0; i<n; i++)
        {
            if(nums[abs(nums[i])-1]<0)
            {
                dub=abs(nums[i]);
            }
            else
            {
                nums[abs(nums[i])-1]*=(-1);
            }
        }
        for(int i=0; i<n; i++)
        {
            if(nums[i]>0)
            {
                miss=i+1;
            }
        }
        return {dub,miss};
    }
};