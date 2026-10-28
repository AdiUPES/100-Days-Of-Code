Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>
#include <math.h>

int main() {
    int n, first, last, digits, p, result;
    scanf("%d", &n);

    last = n % 10;
    digits = (int)log10(n);
    p = (int)(pow(10, digits) + 0.5);
    first = n / p;

    if (digits == 0) {
        result = n;
    } else {
        result = last * p + (n % p) - last + first;
    }

    printf("%d\n", result);

    return 0;
}
