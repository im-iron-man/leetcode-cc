class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result(numRows);
        for (int i = 0; i < numRows; i++) {
            result[i].push_back(1);
            for (int j = 1; j < i; j++)
                result[i].push_back(result[i-1][j-1] + result[i-1][j]);
            if (i) result[i].push_back(1);
        }
        return result;
    }
};