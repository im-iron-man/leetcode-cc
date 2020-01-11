class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> res(digits.size() + 1, 0);
        int adv = 0, tmp;
        for (int i = digits.size() - 1; i > -1; i--) {
            tmp = digits[i] + adv;
            if (i == digits.size() - 1) tmp++;
            res[i + 1] = tmp % 10;
            adv = tmp / 10;
        }
        if (adv) res[0] = adv; else res.erase(res.begin());
        return res;
    }
};