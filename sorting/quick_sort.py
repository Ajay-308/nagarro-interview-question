def quick_sort(arr, low, high):
    if low < high:
        pi = partition(arr, low, high)  # partition index
        quick_sort(arr, low, pi - 1)
        quick_sort(arr, pi + 1, high)

def partition(arr, low, high):
    pivot = arr[low]  # use the first element as pivot
    i = low + 1

    for j in range(low + 1, high + 1):
        if arr[j] < pivot:
            arr[i], arr[j] = arr[j], arr[i]
            i += 1

    arr[low], arr[i - 1] = arr[i - 1], arr[low]  # place pivot in correct position
    return i - 1

# Test
arr = [5, 3, 8, 4, 2,1]
quick_sort(arr, 0, len(arr) - 1)
print("Sorted array:", arr)
