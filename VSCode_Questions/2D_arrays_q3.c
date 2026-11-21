#include <stdio.h>
int main() {
    int r, c;
    if (scanf("%d %d", &r, &c) != 2) {
        return 0;
    }
    if (r <= 0 || c <= 0) {
        printf("None\n");
        return 0;
    }
    int matrix[100][100];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < r; i++) {
        int rowMin = matrix[i][0];
        for (int j = 1; j < c; j++) {
            if (matrix[i][j] < rowMin) {
                rowMin = matrix[i][j];
            }
        }
        for (int j = 0; j < c; j++) {
            if (matrix[i][j] == rowMin) {
                int isColMax = 1;
                for (int k = 0; k < r; k++) {
                    if (matrix[k][j] > matrix[i][j]) {
                        isColMax = 0;
                        break;
                    }
                }
                if (isColMax) {
                    printf("%d %d %d\n", i, j, matrix[i][j]);
                    return 0;
                }
            }
        }
    }
    printf("None\n");
    return 0;
}