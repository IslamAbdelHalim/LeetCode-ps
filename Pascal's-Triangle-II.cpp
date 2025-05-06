class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> pascal = {1};

        int n = 0;

        while (n < rowIndex) {
            vector<int> row = {1};
            for (int i = 0; i < pascal.size() - 1; i++) {
                int num =  pascal[i] + pascal[i+1];
                row.push_back(num);
            }

            row.push_back(1);
            pascal = row;
            n++;
        }

        return pascal;
    }
};