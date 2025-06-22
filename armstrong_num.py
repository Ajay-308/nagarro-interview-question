def is_armstrong(n):
    temp = n
    digits = 0
    

    while temp > 0:
        digits += 1
        temp //= 10

    temp = n
    total = 0

    while temp > 0:
        digit = temp % 10
        total += digit ** digits
        temp //= 10

    return total == n

# Test
print(is_armstrong(153))   # True
print(is_armstrong(9474))  # True
print(is_armstrong(123))   # False
