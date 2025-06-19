def has_equal_frequency(s):
    hash_map = {}

    # Step 1: Count frequencies
    for ch in s:
        if ch in hash_map:
            hash_map[ch] += 1
        else:
            hash_map[ch] = 1

    # Step 2: Get all frequencies
    freq_list = list(hash_map.values())

    # Step 3: Check if all frequencies are same
    for freq in freq_list:
        if freq != freq_list[0]:
            return False

    return True
