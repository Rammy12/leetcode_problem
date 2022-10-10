class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int zerocount=0;
        int m=1;
        vector<int>ans;
        for(int i=0; i<n; i++)
        {
            if(nums[i]==0)
            {
                if(i==n-1)
                {
                    zerocount++;
                    break;
                }
                i++;
                zerocount++;
            }
            m=m*nums[i];
        }
        int i=0;
        if(zerocount>1)
        {
            vector<int>v(n,0);
            return v;
        }
        while(i<n){
            if(nums[i]!=0 and zerocount>0)
            {
                ans.push_back(0);
                //zerocount--;
                i++;
            }
            else if(nums[i]!=0 )
            {
                ans.push_back(m/nums[i]);
                i++;
            }
            else
            {
                
                ans.push_back(m);
                //zerocount--;
                i++;
            }
            
        }
        return ans;
    }
};