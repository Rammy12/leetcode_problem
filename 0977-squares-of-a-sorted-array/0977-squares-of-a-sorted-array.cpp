class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int>result(n);
        int i = 0, j = n - 1;
        for (int p = n - 1; p >= 0; p--) {
            if (abs(nums[i]) > abs(nums[j])) {
                result[p] = nums[i] * nums[i];
                i++;
            } else {
                result[p] = nums[j] * nums[j];
                j--;
            }
        }
        return result;
    }
};