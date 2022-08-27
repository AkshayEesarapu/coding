//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int profit=0;
        int maxi=prices[0];
        
        for(int i=1;i<prices.size();i++){
            int cost=prices[i]-maxi;
            profit=max(cost,profit); //0 4
            maxi=min(maxi,prices[i]); //1 1 
        }
        
        return profit;
        
    }
};
