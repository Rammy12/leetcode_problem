class Solution {
public:
    int arrangeCoins(int n) {
        int low=0;
        int high=n;
        long long int res,sum=0;
        while(low<=high)
        {
            long long int mid=(low+high)/2;
            sum=mid*(mid+1)/2;
            if(sum==n)
            {
                return mid;
            }
            else if(sum>n)
            {
                high=mid-1;
            }
            else
            {
                res=mid;
                low=mid+1;
            }
        }
        return res;
    }
};