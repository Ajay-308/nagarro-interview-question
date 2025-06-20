
#Use a HashMap (dictionary) to store each number and its first index.
#As we traverse the array:
#If a number is not seen before, store it in the map with its index.
#If a number is already in the map, it's a repeating element. Track this index if it's the earliest repeat seen so far.

def first_repeating_index(arr):
    seen = {}
    min_index = len(arr) 

    for i, num in enumerate(arr):
        if num in seen:
            min_index = min(min_index, seen[num])
        else:
            seen[num] = i

    return min_index if min_index != len(arr) else -1 

# Example
arr = [2, 5, 1, 2, 3, 5, 1]
print(first_repeating_index(arr))  # Output: 0
