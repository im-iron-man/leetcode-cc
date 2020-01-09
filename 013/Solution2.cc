class Solution {
public:
    int getNum(char c) {
        switch (c) {
            case 'I':
                return 1;
            case 'V':
                return 5;
            case 'X':
                return 10;
            case 'L':
                return 50;
            case 'C':
                return 100;
            case 'D':
                return 500;
            case 'M':
                return 1000;
            default:
                return 0;
        }
    }

    int romanToInt(string s) {
        if (s.empty()) return 0;        
        int n = s.length();
        int r = getNum(s[n - 1]);
        int now, last = r;
        for (int i = n - 2; i > -1; i--) {
            now = getNum(s[i]);
            r += (now < last) ? -now : now;
            last = now;
        }
        return r;
    }
};