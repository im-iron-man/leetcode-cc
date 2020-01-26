class Solution {
public:
    string convertToTitle(int n) {
        string r;
        while (n) {
            r = string(1, --n % 26 + 65) + r;
            n /= 26;
        }
        return r;
    }
};