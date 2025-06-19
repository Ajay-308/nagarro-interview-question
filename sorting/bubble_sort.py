def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        # Last i elements are already in place
        for j in range(0, n - i - 1):
            if arr[j] > arr[j + 1]:
                # Swap if current is greater than next
                arr[j], arr[j + 1] = arr[j + 1], arr[j]

    return arr


print(bubble_sort([5,4,3,2,1]))

# optimized version of it 

def bubble_sort_optimized(arr):
    n = len(arr)
    for i in range(n):
        swapped = False  
        for j in range(0, n - i - 1):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
                swapped = True
        if not swapped:
            break  
    return arr


print(bubble_sort_optimized([5,4,3,2,1]))