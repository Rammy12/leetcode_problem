class Solution {
public:
    bool isPerfectSquare(int num) {
        int low=0;
        int high=num;
        long long int sqr;
        while(low<=high)
        {
            long long int mid=(low+high)/2;
            sqr=mid*mid;
            if(sqr==num)
            {
                return true;
            }
            else if(sqr>num)
            {
                high=mid-1;
            }
            else 
            {
                low=mid+1;
            }
        }
        return false;
        
    }
};