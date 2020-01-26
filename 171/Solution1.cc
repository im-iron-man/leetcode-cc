class Solution {
public:
    int titleToNumber(string s) {
        int r = 0;
        for (auto &x: s)
            r = r * 26 + (x - 64);
        return r;
    }
};