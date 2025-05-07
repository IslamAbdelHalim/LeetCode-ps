class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int, int> hash;

        for (int i = 0; i < nums.size(); i++) {
            int j = nums[i];
            if (hash.find(j) != hash.end()) {
                int idx = hash[j];
                int sub = -(idx - i);
                if (sub <= k) {
                    return true;
                }
            }

            hash[j] = i;
        }

        return false;
    }
};