// O(N)
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        if (x && !(x % 10)) return false;
        
        int64_t xx = x;
        int64_t r = 0;
        while (xx) {
            r = 10 * r + xx % 10;
            xx /= 10;
        }
        return (r < INT_MIN || r > INT_MAX) ? false : x == r;
    }
};