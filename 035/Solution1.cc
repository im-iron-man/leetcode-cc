class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = -1, high = nums.size();
        int index;
        while (low + 1 != high) {
            index = low + (high - low) / 2;
            if (nums[index] < target) low = index;
            else                      high = index;
        }
        return high;
    }
};