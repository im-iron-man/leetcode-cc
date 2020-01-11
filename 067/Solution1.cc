class Solution {
public:
    string addBinary(string a, string b) {
        string s;
        int va, vb, vc = 0, vt;
        for (int ia = a.length() - 1, ib = b.length() - 1; ia > -1 || ib > -1; ia--, ib--) {
            va = ia > -1 ? (a[ia] - '0') : 0;
            vb = ib > -1 ? (b[ib] - '0') : 0;
            vt = va + vb + vc;
            s = ((char) (vt % 2 + '0')) + s;
            vc = vt / 2;
        }
        return vc ? '1' + s : s;
    }
};