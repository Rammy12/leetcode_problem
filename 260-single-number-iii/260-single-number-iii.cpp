class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        int res=0;
        for(int i=0; i<n; i++)
        {
            res=res^nums[i];
        }
        int pos=0;
        int temp=res;
        while((temp&1)==0)
        {
            pos++;
            temp=temp>>1;
        }
        int setA=0;
        int setB=0;
        int mask=(1<<pos);
        for(int i=0; i<n; i++)
        {
            if((nums[i]&mask)>0)
            {
                setA=setA^nums[i];
            }
            else
            {
                setB=setB^nums[i];
            }
        }
        ans.push_back(setA);
        ans.push_back(setB);
        return ans;
    }
};