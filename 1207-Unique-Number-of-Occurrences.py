class Solution(object):
    def uniqueOccurrences(self, arr):
        """
        :type arr: List[int]
        :rtype: bool
        """
        
        nums = {}

        for i in arr:
            if i in nums:
                nums[i] += 1
            else:
                nums[i] = 1
        
        occ = list(nums.values())

        for i in range(len(occ) - 1):
            if occ[i] in occ[i+1:]:
                return False
        return True