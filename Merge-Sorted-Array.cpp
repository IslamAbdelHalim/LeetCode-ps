class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int f = 0;
        int s = 0;

        vector<int> arr;

        while (f < m && s < n) {
            if (nums1[f] < nums2[s]) {
                arr.push_back(nums1[f]);
                f++;
            } else {
                arr.push_back(nums2[s]);
                s++;
            }
        }

        while (f < m) {
            arr.push_back(nums1[f]);
            f++;
        }

        while (s < n) {
            arr.push_back(nums2[s]);
            s++;
        }

        int i = 0;
        for (; i < m + n; i++) {
            nums1[i] = arr[i];
        }
    }
};