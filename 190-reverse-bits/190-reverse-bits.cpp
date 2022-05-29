class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans=0;
        int last_bit=0;
        for(int i=0; i<32; i++)
        {
            last_bit=n%2;
            n=n/2;
            ans+=last_bit*pow(2,31-i);
        }
        return ans;
        
    }
};