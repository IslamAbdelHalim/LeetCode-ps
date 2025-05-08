class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLen = 0;

        set<char> sub;
        int l = 0;

        for (int i = 0; i < s.length(); i++) {
            while (sub.count(s[i]) != 0) {
                sub.erase(s[l]);
                l++;
            }
            sub.insert(s[i]);
            maxLen = max(maxLen, i - l + 1);
        }

        return maxLen;
    }
};