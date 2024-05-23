class Solution(object):
    def twoSum(self, numbers, target):
        \\\
        :type numbers: List[int]
        :type target: int
        :rtype: List[int]
        \\\
        
        idx1 = 0
        idx2 = len(numbers) - 1

        while (idx1 < idx2):
            num = numbers[idx1] + numbers[idx2]

            if target == num:
                return [idx1+1, idx2+1]
            elif num > target:
                idx2 -= 1
            else:
                idx1 += 1