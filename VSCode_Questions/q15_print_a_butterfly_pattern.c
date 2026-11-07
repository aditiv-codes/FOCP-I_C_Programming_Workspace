#include <stdio.h>
int main() {
    int n;
    if (scanf("%d", &n) != 1) {
        return 0;
    }
    int mid = (n + 1) / 2;
    for (int i = 1; i <= n; i++) {
        int stars = (i <= mid) ? i : (n - i + 1);
        int spaces = 2 * (mid - stars) + 1;
        for (int j = 0; j < stars; j++) {
            printf("*");
        }
        for (int j = 0; j < spaces; j++) {
            printf(" ");
        }
        for (int j = 0; j < stars; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}