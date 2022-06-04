class Solution {
public:
    int numFromBits(vector<int>num)
    {
        int nums=0;
        int n=num.size();
        for(int i=0; i<n; i++)
        {
            nums+=num[i]*(1<<i);
        }
        return nums;
    }
    void UpdateSum(vector<int>&num,int x)
    {
        for(int i=0; i<32; i++)
        {
            int ith_bit=x&(1<<i);
            if(ith_bit)
            {
                num[i]++;
            }
        }
    }
    int singleNumber(vector<int>& nums) {
        vector<int>SumArr(32,0);
        for(int x:nums)
        {
            UpdateSum(SumArr,x);
        }
        for(int i=0; i<32; i++)
        {
            SumArr[i]=SumArr[i]%3;
        }
        return numFromBits(SumArr);
        
    }
};