#include <stdio.h>
int main() {
    int r, c;
    if (scanf("%d %d", &r, &c) != 2) {
        return 0;
    }
    if (r <= 0 || c <= 0) {
        return 0;
    }
    int matrix[100][100];
    int rowSum[100] = {0};
    int colSum[100] = {0};
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
            rowSum[i] += matrix[i][j];
            colSum[j] += matrix[i][j];
        }
    }
    for (int i = 0; i < r; i++) {
        printf("%d%s", rowSum[i], (i == r - 1) ? "" : " ");
    }
    printf("\n");
    for (int j = 0; j < c; j++) {
        printf("%d%s", colSum[j], (j == c - 1) ? "" : " ");
    }
    printf("\n");
    return 0;
}