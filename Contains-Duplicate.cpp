class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> dublicate;

        for (int n: nums) {
            if (dublicate[n]) {
                return true;
            }

            dublicate[n] = 1;
        }

        return false;
    }
};