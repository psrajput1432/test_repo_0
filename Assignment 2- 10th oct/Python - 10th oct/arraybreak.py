def break_array_recursive(arr):
    if not arr:
        return []
    else:
        return [[arr[0]]] + break_array_recursive(arr[1:])

# Example usage:
input_array = [16, 12, 6, 3, 22, 11, 9]

# Break the array into individual subarrays recursively
subarrays = break_array_recursive(input_array)

# Print the result
print("Original array:", input_array)
print("Subarrays:", subarrays)