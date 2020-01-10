class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        if (strs.size() == 1) return strs[0];
        
        string base = strs[0];
        char c;
        int i = 0;
        bool stop = false;
        for (; (i < base.length()) && !stop; i++) {
            c = base[i];
            for (int j = 1; j < strs.size(); j++) {
                if ((i >= strs[j].length()) || (strs[j][i] != c)) {
                    i--;
                    stop = true;
                    break;
                }
            }
        }

        return base.substr(0, i);
    }
};