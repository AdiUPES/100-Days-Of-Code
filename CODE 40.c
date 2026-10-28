Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i, len;
    scanf("%s", s);

    len = strlen(s);
    for (i = 0; i < len; i++) {
        printf("%c", s[i] == '0' ? '1' : '0');
    }
    printf("\n");

    return 0;
}
