#include <iostream>
#include <cctype>

int string_to_decimal(const std::string& s) {
    int decimal_number = 0;

    for (char c : s) {
        decimal_number = decimal_number * 26 + (std::toupper(c) - 'A' + 1);
    }

    return decimal_number;
}

int main() {
    std::string input_string = "abcd";
    int result = string_to_decimal(input_string);

    std::cout << "The decimal equivalent of '" << input_string << "' is: " << result << std::endl;

    return 0;
}