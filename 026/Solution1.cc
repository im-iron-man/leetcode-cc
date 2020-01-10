class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        int size = nums.size();
        int tmp = nums[size - 1];
        int count = 1;
        for (int i = size - 2; i > -1; i--) {
            if (nums[i] == tmp) {
                nums.erase(nums.begin() + i); 
            } else {
                tmp = nums[i]; 
                count++;
            }
        }
        return count;
    }
};