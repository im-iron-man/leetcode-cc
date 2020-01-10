class Solution {
public:
    string generate(string num) {
        string r = "";
        char tmp = num[0];
        int cnt = 1;
        for (int i = 1; i < num.length(); i++) {
            if (num[i] == tmp) {
                cnt++;
            } else {
                if (cnt == 1) {
                    r += '1';
                    r += tmp;
                } else {
                    r += to_string(cnt);
                    r += tmp;
                    cnt = 1;
                }
                tmp = num[i];
            }
        }
        if (cnt == 1) {
            r += '1';
            r += tmp;
        } else {
            r += to_string(cnt);
            r += tmp;
        }
        return r;
    }
    
    string countAndSay(int n) {
        if (n == 1) return "1";
        return generate(countAndSay(n - 1));
    }
};