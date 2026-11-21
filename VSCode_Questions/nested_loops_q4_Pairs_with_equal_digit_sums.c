#include <stdio.h>
int digitSum(int x) {
    if (x < 0) {
        x = -x;
    }
    int sum = 0;
    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}
int main() {
    int n;
    if (scanf("%d", &n) != 1) {
        return 0;
    }
    if (n <= 1) {
        printf("0\n");
        return 0;
    }
    int sums[10000];
    for (int i = 0; i < n; i++) {
        int val;
        scanf("%d", &val);
        sums[i] = digitSum(val);
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (sums[i] == sums[j]) {
                count++;
            }
        }
    }
    printf("%d\n", count);
    return 0;
}