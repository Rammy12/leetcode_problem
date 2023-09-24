class Solution {
public:
    int recursive_binary_search(vector<int>& nums, int low, int high){
        if(low == high){
            return low;
        }
        int mid = (low + high) >> 1;
        if(nums[mid] > nums[mid+1]){
            return recursive_binary_search(nums, low, mid);
        }
        else{
            return recursive_binary_search(nums, mid+1, high);
        }
    }
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        return recursive_binary_search(nums,0,n-1);
    }
};