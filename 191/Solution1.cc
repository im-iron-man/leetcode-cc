class Solution {
public:
    int hammingWeight(uint32_t n) {
        int c;
        for (c = 0; n; n >>= 1)
            if (n & 1) 
                c++;
        return c;
    }
};