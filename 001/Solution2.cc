// O(N)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int num1, num2;
        map<int, int> indexMap;
        for (int i = 0; i < nums.size(); i++) {
            num1 = nums[i];
            num2 = target - num1;
            if (indexMap.find(num2) != indexMap.end()) {
                return {indexMap[num2], i};
            }
            indexMap[num1] = i;
        }
        return {};
    }
};