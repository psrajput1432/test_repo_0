#include <stdio.h>
#include <stdbool.h>

int string_to_decimal(char *s) {
    int decimal_number = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        decimal_number = decimal_number * 26 + (toupper(s[i]) - 'A' + 1);
    }
    return decimal_number;
}

bool compare_strings(char *str1, char *str2) {
    int len1 = 0, len2 = 0;
    for (int i = 0; str1[i] != '\0'; i++) {
        len1++;
    }
    for (int i = 0; str2[i] != '\0'; i++) {
        len2++;
    }
    if (len1 == len2) {
        for (int i = 0; str1[i] != '\0'; i++) {
            if (str1[i] != str2[i]) {
                return false;
            }
        }
        return true;
    } else {
        return false;
    }
}

int main() {
    char input_string1[] = "abcd";
    char input_string2[] = "abcde";
    int result1 = string_to_decimal(input_string1);
    int result2 = string_to_decimal(input_string2);
    printf("The decimal equivalent of '%s' is: %d\n", input_string1, result1);
    printf("The decimal equivalent of '%s' is: %d\n", input_string2, result2);

    if (compare_strings(input_string1, input_string2)) {
        printf("Strings are equal in length.\n");
    } else {
        printf("Strings are not equal in length.\n");
    }

    return 0;
}