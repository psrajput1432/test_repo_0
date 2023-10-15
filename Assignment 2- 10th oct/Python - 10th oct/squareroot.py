def integer_sqrt(n):
    if n == 0 or n == 1:
        return n

    left, right = 0, n
    result = 0

    while left <= right:
        mid = left + (right - left) // 2

        if mid * mid == n:
            return mid
        elif mid * mid < n:
            left = mid + 1
            result = mid
        else:
            right = mid - 1

    return result

# Example usage:
number = 25
result = integer_sqrt(number)
print(f"The integer square root of {number} is: {result}")
