/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    let ans = new Map();
    for (let i = 0; i < nums.length; i++) {
        num = nums[i]
        if (ans.has(num)) {
            return [ans.get(num), i]
        } else {
            sub = target - nums[i];
            ans.set(sub, i);
        }
    }
};