#include <stdio.h>
#include <limits.h>

int main() {
    int n, i, x, first = INT_MIN, second = INT_MIN;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        if (x > first) {
            second = first;
            first = x;
        } else if (x > second && x != first) {
            second = x;
        }
    }

    printf("%d\n", second);

    return 0;
}
