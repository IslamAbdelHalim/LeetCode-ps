class Solution {
public:
    int search(vector<int>& nums, int target) {
        int f = 0;
        int l = nums.size() - 1;
        int mid;
        while (f <= l) {
            mid = f + (l - f) / 2;
            int num = nums[mid];

            if (num == target) {
                return mid;
            } else if (num > target) {
                l = mid - 1;
            } else {
                f = mid + 1;
            }
        }

        return -1;
    }
};