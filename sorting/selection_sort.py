def selection_sort(arr):
    n = len(arr)
    for i in range(n):
        min_index = i

        # Find index of the minimum element in the remaining unsorted part
        for j in range(i + 1, n):
            if arr[j] < arr[min_index]:
                min_index = j

        # Swap the found minimum element with the element at index i
        arr[i], arr[min_index] = arr[min_index], arr[i]

    return arr

# Example usage
arr = [5, 3, 8, 4, 2]
sorted_arr = selection_sort(arr)
print("Sorted array:", sorted_arr)
