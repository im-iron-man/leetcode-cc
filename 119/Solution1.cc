class Solution {
public:
    vector<int> getRow(int rowIndex) {
        if (rowIndex == 0) return {1};
        if (rowIndex == 1) return {1, 1};
        
        vector<int> prev = {1, 1};
        vector<int> root;
        for (int i = 2; i < rowIndex + 1; i++) {
            root = {};
            root.push_back(1);
            for (int j = 1; j < i; j++)
                root.push_back(prev[j-1] + prev[j]);
            root.push_back(1);
            prev = root;
        }
        return root;
    }
};