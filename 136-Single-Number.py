class Solution(object):
    def singleNumber(self, nums):
        \\\
        :type nums: List[int]
        :rtype: int
        \\\
        
        num_dict = {}

        for num in nums:
            if num not in num_dict:
                num_dict[num] = [num]
            else:
                num_dict[num].append(num)
        
        for num in num_dict.values():
            if len(num) == 1:
                return num[0]