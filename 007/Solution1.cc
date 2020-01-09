class Solution {
public:
    int reverse(int x) {
        int64_t r = 0;
        int64_t xx = x;
        xx = abs(xx);
        while (xx) {
            r = 10 * r + xx % 10;
            xx /= 10;
        }
        r = (x < 0 ? -1 : 1) * r;
        return (r < INT_MIN || r > INT_MAX) ? 0 : r;
    }
};