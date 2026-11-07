class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int buy=100,profit=0;
        int i=0;
        while(i<n){
            buy=min(buy,prices[i]);
            int pro = prices[i]-buy;
            profit = max(profit,pro);
            i++;
        }
        return profit;
        
    }
};
