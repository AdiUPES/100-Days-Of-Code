Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
  #include <stdio.h>

int main() {
    int n, i, maxDigit = 0;
    int count[10] = {0};
    scanf("%d", &n);

    if (n == 0) {
        count[0] = 1;
    }
    while (n > 0) {
        count[n % 10]++;
        n /= 10;
    }

    for (i = 1; i < 10; i++) {
        if (count[i] > count[maxDigit]) {
            maxDigit = i;
        }
    }

    printf("%d\n", maxDigit);

    return 0;
}
