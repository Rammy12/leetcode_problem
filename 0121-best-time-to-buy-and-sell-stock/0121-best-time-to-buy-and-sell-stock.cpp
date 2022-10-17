class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int min_price=1e4+1;
        int max_price=0;
        int price=0;
        for(int i=0; i<n; i++)
        {
            if(prices[i]<min_price)
            {
                min_price=prices[i];
            }
            price=prices[i]-min_price;
            if(price>max_price)
            {
                max_price=price;
            }
        }
        return max_price;
    }
};