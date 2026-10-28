//Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;

    if (scanf("%d", &n) != 1) {
        return 0;
    }

    // Numbers less than or equal to 1 are not prime
    if (n <= 1) {
        printf("Not prime\n");
        return 0;
    }

    // 2 and 3 are prime numbers
    if (n == 2 || n == 3) {
        printf("Prime\n");
        return 0;
    }

    // Eliminate even numbers and multiples of 3
    if (n % 2 == 0 || n % 3 == 0) {
        printf("Not prime\n");
        return 0;
    }

    // Check factors of form 6k ± 1 up to sqrt(n)
    bool isPrime = true;
    for (int i = 5; (long long)i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime) {
        printf("Prime\n");
    } else {
        printf("Not prime\n");
    }

    return 0;
}
