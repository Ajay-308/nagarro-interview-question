def twoSum(nums, target):
    hashmap = {}  # stores number -> index

    for i, num in enumerate(nums):
        diff = target - num
        if diff in hashmap:
            return [hashmap[diff], i]
        hashmap[num] = i



# 2nd apperoch 
def twoSum2(nums, target):
    i = 0
    j = len(nums) - 1

    while i < j:
        sum = nums[i] + nums[j]
        if sum == target:
            return [i, j]
        elif sum < target:
            i += 1
        else:
            j -= 1


#3rd approch 
def twoSum(nums, target):
    n = len(nums)
    
    for i in range(n):
        for j in range(i + 1, n):
            if nums[i] + nums[j] == target:
                return [i, j]
    
    return []  # if no solution found
