def string_to_decimal(s):
    decimal_number = 0
    for char in s:
        decimal_number = decimal_number * 26 + (ord(char.upper()) - ord('A') + 1)

    return decimal_number

def compare_strings(str1,str2):
    if len(str1) == len(str2):
      return str1 == str2
    else:
      return False

# Example usage:
input_string1 = "abcd"
input_string2 = "abcde"

result1 = string_to_decimal(input_string1)
result2 = string_to_decimal(input_string2)

print(f"The decimal equivalent of'{input_string1}' is: {result1}")
print(f"The decimal equivalent of'{input_string2}' is: {result2}")

#Compare the strings
if compare_strings(input_string1, input_string2):
   print("Strings are equal in length.")
else:
   print("Strings are not equal in length.")
