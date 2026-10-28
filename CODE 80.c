Q80: Multiply two matrices.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/
  #include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j, k, sum;
    scanf("%d %d", &r1, &c1);

    int a[r1][c1];
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    scanf("%d %d", &r2, &c2);

    int b[r2][c2];
  
