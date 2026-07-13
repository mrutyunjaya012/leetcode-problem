// Last updated: 13/07/2026, 16:18:23
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int minn=prices[0];
        for(int i=1; i<prices.size(); i++){
            int cost=prices[i]-minn;
            profit=max(profit,cost);
            minn=min(minn, prices[i]);
        }
        return profit;
    }
};