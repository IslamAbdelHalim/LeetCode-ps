class Solution(object):
    def maxLengthBetweenEqualCharacters(self, s):
        """
        :type s: str
        :rtype: int
        """
        
        longest_str = -1
        sub_string = {}

        for idx, letter in enumerate(s):
            if letter in sub_string:
                len_sub = idx - sub_string[letter] - 1
                longest_str = len_sub if longest_str < len_sub else longest_str
            else:
                sub_string[letter] = idx
        return longest_str