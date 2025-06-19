class Solution:
    def nextPermutation(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        n = len(nums)
        i = n - 1
        while i > 0 and nums[i] <= nums[i - 1]:
            i -= 1

        if i != 0:
            index = i
            for j in range(n - 1, i - 1, -1):
                if nums[j] > nums[i - 1]:
                    index = j
                    break
            nums[i - 1], nums[index] = nums[index], nums[i - 1]
        nums[i:] = reversed(nums[i:])


# python and here in c++
# nums[i:] ==reverse(nums.begin() + i, nums.end());