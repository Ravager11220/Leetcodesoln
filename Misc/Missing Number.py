class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        a=set(nums)
        for i in range(len(nums) + 1):
            if i not in a:
                return i
