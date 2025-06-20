class Solution:
    def divideArray(self, nums: List[int], k: int) -> List[List[int]]:
        ans = []
        nums.sort()
        n = len(nums)
        
        for i in range(0, n, 3):
            if i + 2 >= n:
                return [] 
            group = [nums[i], nums[i + 1], nums[i + 2]]
            if group[2] - group[0] > k:
                return []
            
            ans.append(group)
        
        return ans
