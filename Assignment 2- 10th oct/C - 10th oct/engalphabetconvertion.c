#include <stdio.h>

int string_to_decimal(char* s) {
    int decimal_number = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        decimal_number = decimal_number * 26 + (toupper(s[i]) - 'A' + 1);
    }
    return decimal_number;
}

int main() {
    char input_string[] = "abcd";
    int result = string_to_decimal(input_string);
    printf("The decimal equivalent of '%s' is: %d\n", input_string, result);
    return 0;
}