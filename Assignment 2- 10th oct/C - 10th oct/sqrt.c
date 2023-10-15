#include <stdio.h>

int integer_sqrt(int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    int left = 0, right = n;
    int result = 0;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (mid * mid == n) {
            return mid;
        }
        else if (mid * mid < n) {
            left = mid + 1;
            result = mid;
        }
        else {
            right = mid - 1;
        }
    }
    return result;
}

int main() {
    int number = 25;
    int result = integer_sqrt(number);
    printf("The integer square root of %d is: %d\n", number, result);
    return 0;
}