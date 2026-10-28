Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/
  #include <stdio.h>

int main() {
    int r, c, i, j, x;
    scanf("%d %d", &r, &c);

    int rowSum[r];
    for (i = 0; i < r; i++) {
        rowSum[i] = 0;
        for (j = 0; j < c; j++) {
            scanf("%d", &x);
            rowSum[i] += x;
        }
    }

    for (i = 0; i < r; i++) {
        printf("%d ", rowSum[i]);
    }
    printf("\n");

    return 0;
}
