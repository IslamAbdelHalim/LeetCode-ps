class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = 0;
        bool countain = false;

        for (int i = s.size() -1; i >= 0; i--) {
            if (s[i] != ' ') {
                countain = true;
                len++;
            } else if (countain) {
                break;
            }
        }

        return len;
    }
};