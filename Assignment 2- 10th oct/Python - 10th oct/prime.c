// Check whether the given number is prime or not.
#include <stdio.h>

int isPrime(int number) {
    if (number <= 1) {
        return 0;  // 0 and 1 are not prime numbers
    }
    
    if (number <= 3) {
        return 1;  // 2 and 3 are prime numbers
    }
    
    // Check if the number is divisible by 2 or 3
    if (number % 2 == 0 || number % 3 == 0) {
        return 0;
    }
    
    // Check for prime numbers of the form 6k ± 1
    for (int i = 5; i * i <= number; i += 6) {
        if (number % i == 0 || number % (i + 2) == 0) {
            return 0;
        }
    }
    
    return 1;  // If no divisors are found, the number is prime
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (isPrime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }
    
    return 0;
}