#include <stdio.h>
int main() {
    char str[10005];
    if (scanf("%10004s", str) != 1) {
        return 0;
    }
    int count = 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i + 1] == str[i]) {
            count++;
        } else {
            printf("%c%d", str[i], count);
            count = 1;
        }
    }
    printf("\n");
    return 0;
}