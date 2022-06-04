class Solution {
public:
    int hammingDistance(int x, int y) {
        int XOR=x^y;
        int dis=0;
        while(XOR>0)
        {
            if((XOR&1) ==1)
            {
                dis++;
            }
            XOR=XOR>>1;
        }
        return dis;
        
    }
};