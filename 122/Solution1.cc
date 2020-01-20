class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sum = 0, tmp, size = prices.size();
        for (int i = 1; i < size; i++) {
            tmp = prices[i] - prices[i - 1];
            if (tmp > 0) sum += tmp;
        }
        return sum;
    }
};