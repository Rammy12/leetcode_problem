class Solution {
public:
    double myPow(double x, int n) {
        /*if(n==0)
        {
            return 1.0000;
        }
        else if(n<0)
        {
            return 1/x*myPow(x,n+1);
        }
        else
        {
            return x*myPow(x,n-1);
        }
        //return myPow(x,n-1);*/
        double ans=pow(x,n);
        return ans;
    }
};