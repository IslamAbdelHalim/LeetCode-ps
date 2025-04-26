class Solution {
public:
    bool isPalindrome(int x) {
        long int num = 0;
        int temp = x;

        while (temp > 0) {
            num = num * 10 + temp % 10;
            temp /= 10;
        }

        return x == num;
    }
};