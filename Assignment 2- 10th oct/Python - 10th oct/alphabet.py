def string_to_decimal(s):
    decimal_number = 0
    for char in s:
        decimal_number = decimal_number * 26 + (ord(char.upper()) - ord('A') + 1)
    return decimal_number

# Example usage:
input_string = "abcd"
result = string_to_decimal(input_string)
print(f"The decimal equivalent of '{input_string}' is: {result}")