class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int f = 0;
        int l = nums.size() - 1;

        if(nums[l] < target) {
            return l+1;
        }

        if (nums[0] > target) {
            return 0;
        }
        
        int m;
        while (f <= l) {
            m = (f + l) / 2;

            if (nums[m] == target) {
                return m;
            } else if (nums[m] > target) {
                l = m - 1;
            } else  {
                f = m + 1;
            }
        }

        return f;
    }
};