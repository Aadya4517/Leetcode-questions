class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice=INT_MAX;
        int maxprofit=0;
        for(int x:prices)
        {
            minprice=min(minprice,x);
            int profit=x-minprice;
            maxprofit=max(maxprofit,profit);
        }
        return maxprofit;
    }
};