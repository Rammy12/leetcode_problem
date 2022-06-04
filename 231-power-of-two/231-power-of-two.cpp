class Solution {
public:
    bool isPowerOfTwo(int n) {
        bool ans=false;
        if(n<=0)
        {
            return false;
        }
        if(n==1)
        {
            return true;
        }
        if((n&(n-1))==0)
        {
            ans=true;
        }
        return ans;
        
    }
};