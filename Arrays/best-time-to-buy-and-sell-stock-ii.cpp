//https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/
class Solution {
public:
    int maxProfit(vector<int>& A) {
     
           if (A.size() <= 1)
                return 0;
            int maxprofit = 0;
            for (int i = 1; i < A.size(); i++) {
                maxprofit += max(0, A[i] - A[i - 1]);
            }
            return maxprofit;
        }

};
