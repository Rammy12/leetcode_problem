class Solution {
public:
    int lower_bound(vector<int>arr,int tar)
    {
        int n=arr.size();
        int l=0;
        int h=n-1;
        
        while(l<=h)
        {
            int mid=(l+h)/2;
            if(arr[mid]==tar)
            {
                if((mid-1)>=0 && arr[mid-1]==tar)
                {
                    h=mid-1;
                }
                else
                {
                    return mid;
                }
            }
            else if(arr[mid]<tar)
            {
                l=mid+1;
            }
            else
            {
                h=mid-1;
            }
        }
        return -1;
    }
    int upper_bound(vector<int>arr,int tar)
    {
        int l=0;
        int r=arr.size()-1;
    while(l<=r)
    {
       int mid=(l+r)/2;
        if(arr[mid]==tar)
        {
            if((mid+1)<=(arr.size()-1) && arr[mid+1]==tar)
            {
                l=mid+1;
            }
            else
                return mid;
        }
        else if(arr[mid]>tar)
        {
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
        return -1;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        
        ans.push_back(lower_bound(nums,target));
        ans.push_back(upper_bound(nums,target));
        int n=ans.size();
        if(n==0)
        {
            return {-1,-1};
        }
        return ans;
        
    }
};