class Solution {
public:
    int hammingWeight(uint32_t n) {
        int c;
        for (c = 0; n; n &= n - 1)
            c++;
        return c;
    }
};