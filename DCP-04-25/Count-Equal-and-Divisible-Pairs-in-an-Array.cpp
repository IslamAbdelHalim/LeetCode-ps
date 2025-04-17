class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        int size = nums.size();
        int count = 0;

        for (int i = 0; i < size; i++) {
            for (int j = i + 1; j < size; j++) {
                if (nums[i] == nums[j]) {
                    int sum = (i * j) % k;
                    count += 1 ? sum == 0 : 0;
                }
            }
        }

        return count;
    }
};