class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(),arr2.end());
        int ans=0;
        for(int n:arr1)
        {
            if(lower_bound(arr2.begin(),arr2.end(),n-d)==upper_bound(arr2.begin(),arr2.end(),n+d))
            {
                ans++;
            }
        }
        return ans;
    }
};