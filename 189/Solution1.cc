class Solution {
public:
    void swap(vector<int>& nums, int i, int j) {
        int tmp = nums[i];
        nums[i] = nums[j];
        nums[j] = tmp;
    }
    
    void swap(vector<int>& nums, int i, int j, int k) {
        int t1 = j - i - 1;
        int t2 = k - j;
        
        if (t1 < 0 || t2 < 0) return;
        
        for (int t = 0; t < min(t1, t2) + 1; t++)
            swap(nums, i + t, j + t);

        if (t1 < t2) swap(nums, j, j + t1 + 1, k);
        else         swap(nums, i + t2 + 1, j, k);
    }
    
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n;
        swap(nums, 0, n - k, n - 1);
    }
};