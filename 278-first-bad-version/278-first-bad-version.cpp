// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l=1;
        long long int h=n;
        
        while(l<h)
        {
            long long int mid=(l+h)/2;
            if(isBadVersion(mid))
            {
                
                h=mid-1;
            }
            else 
            {
                l=mid+1;
            }
        }
        if(isBadVersion(l))
        {
            return l;
        }
        else 
        {
            return l+1;
        }
        
    }
};