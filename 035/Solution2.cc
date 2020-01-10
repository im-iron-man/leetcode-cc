class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = -1, high = nums.size();
        int index, tmp;
        while (low + 1 != high) {
            index = low + (high - low) / 2;
            tmp = nums[index];
            if      (tmp < target) low = index;
            else if (tmp > target) high = index;
            else                   return index;  // no duplicates in the array 
        }
        return high;
    }
};