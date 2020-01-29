class Solution {
public:
    int trailingZeroes(int n) {
        long p = 5, m = n;
        int r = 0;
        while (m >= p) {
            r += (m / p);
            p *= 5;
        }
        return r;
    }
};