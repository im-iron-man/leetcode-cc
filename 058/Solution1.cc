class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt = 0;
        for (int i = s.length() - 1; i > -1; i--) {
            if (s[i] == ' ') {
                if (cnt) break; else continue;
            }
            cnt++;
        }
        return cnt;
    }
};