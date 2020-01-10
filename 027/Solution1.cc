class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int size = nums.size();
        for (int i = size - 1; i > -1; i--)
            if (nums[i] == val) nums.erase(nums.begin() + i);
        return nums.size();
    }
};