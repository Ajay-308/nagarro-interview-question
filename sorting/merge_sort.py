def merge_sort(arr):
    if len(arr) > 1:
        mid = len(arr) // 2
        L = arr[:mid]     # Left half
        R = arr[mid:]     # Right half

        merge_sort(L)     # Sort left half
        merge_sort(R)     # Sort right half

        # Merge the sorted halves
        i = j = k = 0

        # Merge until one of the sides is done
        while i < len(L) and j < len(R):
            if L[i] < R[j]:
                arr[k] = L[i]
                i += 1
            else:
                arr[k] = R[j]
                j += 1
            k += 1

        # Copy the remaining elements
        while i < len(L):
            arr[k] = L[i]
            i += 1
            k += 1
        while j < len(R):
            arr[k] = R[j]
            j += 1
            k += 1

arr = [5, 3, 8, 4, 2, 1]
merge_sort(arr)
print(arr)  # [1, 2, 3, 4, 5, 8]

