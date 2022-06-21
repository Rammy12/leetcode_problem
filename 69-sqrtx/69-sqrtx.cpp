class Solution {
public:
    int mySqrt(int x) {
        int low=0;
        int high=x;
        long long int sqr;
        while(low<=high)
        {
            long long int mid=(low+high)/2;
            sqr=mid*mid;
            if(sqr==x)
            {
                return mid;
            }
            else if(sqr<x)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        return low-1;
    }
};