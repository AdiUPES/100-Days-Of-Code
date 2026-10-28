Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
  #include <stdio.h>

int main() {
    int n, c, i, j, x, sum = 0;
    scanf("%d %d", &n, &c);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &x);
            if (i == j) {
                sum += x;
            }
        }
    }

    printf("%d\n", sum);

    return 0;
}
