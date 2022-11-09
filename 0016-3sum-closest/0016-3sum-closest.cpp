class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int ans = INT_MIN;
        for(int i = 0;i<=n-3;i++){
            int j = i+1, k = n-1;
			
            while(j < k){
                int sumtemp = nums[i] + nums[j] + nums[k];
                if(sumtemp == target){
                    return sumtemp;
                }
                if(sumtemp < target ){
                    if(ans == INT_MIN) ans = sumtemp;
                    else{
                        if(abs(ans-target) > abs(sumtemp-target)) ans = sumtemp;
                    }
                    j++;
                }
                else{
                    k--;
                    if(ans == INT_MIN) ans = sumtemp;
                    else{
                        if(abs(ans-target) > abs(sumtemp-target)) ans = sumtemp;
                    }
                }
            }
            
        }
        return ans;
        
    }
};