def insertion_sort(arr):
    for i in range(1, len(arr)):
        key = arr[i]      # The element to be inserted
        j = i - 1

        # Move elements greater than key one position ahead
        while j >= 0 and arr[j] > key:
            arr[j + 1] = arr[j]
            j -= 1

        # Insert key at the right position
        arr[j + 1] = key

    return arr

# Example usage
arr = [5, 3, 8, 4, 2]
sorted_arr = insertion_sort(arr)
print("Sorted array:", sorted_arr)
