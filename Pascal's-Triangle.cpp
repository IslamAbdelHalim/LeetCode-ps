class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal = {{1}};

        int n = 0;

        while (n < numRows - 1) {
            vector<int> row = {1};
            for (int i = 0; i < pascal[n].size() -1; i++) {
                int num = pascal[n][i] + pascal[n][i + 1];
                row.push_back(num);
            }

            row.push_back(1);
            pascal.push_back(row);
            n++;
        }

        return pascal;
    }
};