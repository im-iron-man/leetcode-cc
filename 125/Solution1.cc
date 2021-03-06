class Solution {
public:
    bool isPalindrome(string s) {
        for (int i = 0, j = s.length() - 1; i < j; i++, j--) {
            for (; !isalnum(s[i]) && i < j; i++) {}
            for (; !isalnum(s[j]) && i < j; j--) {}
            if (tolower(s[i]) == tolower(s[j])) continue;
            return false;
        }
        return true;
    }
};