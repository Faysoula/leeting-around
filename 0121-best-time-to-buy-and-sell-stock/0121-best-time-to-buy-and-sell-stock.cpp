class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //find the min value and the mac of subtracting every elemnt after it

        int buy = INT_MAX, sell = 0;
        for(int i = 0 ; i < prices.size(); i++){
            buy = min(prices[i], buy);
            sell = max(prices[i] - buy, sell);
        }

        return sell;
    }
};