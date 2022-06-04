class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0)
        {
            return false;
        }
        int cheak_bit=3;
    if((n & n-1)!=0)
    {
        return false;
    }
    while((cheak_bit & n)==0)
    {
        n>>=2;
    }
    return ((n&cheak_bit)==1);
        
    }
};