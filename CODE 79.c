Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
  #include <stdio.h>

int main() {
    int r, c, i, j, s, lo, hi;
    scanf("%d %d", &r, &c);

    int mat[r][c];
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for (s = 0; s <= r + c - 2; s++) {
        lo = (s - c + 1 > 0) ? s - c + 1 : 0;
        hi = (s < r - 1) ? s : r - 1;

        if (s % 2 == 1) {
            for (i = lo; i <= hi; i++) {
                printf("%d ", mat[i][s - i]);
            }
        } else {
            for (i = hi; i >= lo; i--) {
                printf("%d ", mat[i][s - i]);
            }
        }
    }
    printf("\n");

    return 0;
}
