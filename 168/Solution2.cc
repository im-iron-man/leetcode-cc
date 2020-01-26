class Solution {
public:
    string convertToTitle(int n) {
        return n ? convertToTitle(n / 26) + string(1, --n % 26 + 65): "";
    }
};