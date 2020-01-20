class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size = prices.size();
        int sum = 0;
        int res = 0;
        for (int i = 1; i < size; i++) {
            sum += prices[i] - prices[i - 1];
            res = max(res, sum);
            sum = max(sum, 0);
        }
        return res;
    }
};