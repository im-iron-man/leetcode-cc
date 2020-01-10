class Solution {
public:
    bool isValid(string s) {
        stack<char> t;
        for (char& c : s) {
            switch (c) {
                case '(':
                case '{':
                case '[': t.push(c);break;
                case ')': if (t.empty() || (t.top() != '(')) return false; else t.pop();break;
                case '}': if (t.empty() || (t.top() != '{')) return false; else t.pop();break;
                case ']': if (t.empty() || (t.top() != '[')) return false; else t.pop();break;
            }
        }
        return t.empty();
    }
};