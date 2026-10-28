Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, n = 0;
    double result = 0.0;

    // Read the input number
    if (scanf("%d", &num) != 1 || num < 0) {
        printf("Not Armstrong\n");
        return 0;
    }

    originalNum = num;

    // Count the number of digits (n)
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        n++;
    }

    // Handle 0 as a special 1-digit case
    if (n == 0) {
        n = 1;
    }

    // Compute the sum of each digit raised to power n
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        result += round(pow(remainder, n));
        temp /= 10;
    }

    // Check if the sum equals the original number
    if ((int)result == originalNum) {
        printf("Armstrong\n");
    } else {
        printf("Not Armstrong\n");
    }

    return 0;
}
