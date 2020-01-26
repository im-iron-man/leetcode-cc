class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int t = nums.size() / 2;
        map<int, int> m;
        for (auto &x: nums)
            if (++m[x] > t)
                return x;
        return 0;
    }
};