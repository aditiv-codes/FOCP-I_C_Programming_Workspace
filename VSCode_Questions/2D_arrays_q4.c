#include <stdio.h>
int main() {
    int r, c;
    if (scanf("%d %d", &r, &c) != 2) {
        return 0;
    }
    if (r <= 0 || c <= 0) {
        printf("0\n");
        return 0;
    }
    int matrix[100][100];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int peaks = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            int val = matrix[i][j];
            int isPeak = 1;
            if (i > 0 && matrix[i - 1][j] >= val) {
                isPeak = 0;
            }
            if (i < r - 1 && matrix[i + 1][j] >= val) {
                isPeak = 0;
            }
            if (j > 0 && matrix[i][j - 1] >= val) {
                isPeak = 0;
            }
            if (j < c - 1 && matrix[i][j + 1] >= val) {
                isPeak = 0;
            }
            if (isPeak) {
                peaks++;
            }
        }
    }
    printf("%d\n", peaks);
    return 0;
}