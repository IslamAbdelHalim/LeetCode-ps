class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int set = unordered_set<int>(nums.begin(), nums.end()).size();
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            unordered_set<int> st;
            for (int j = i; j < nums.size(); j++) {
                st.insert(nums[j]);
                if (st.size() == set)
                    count++;
            }
        }
        return count;
    }
};