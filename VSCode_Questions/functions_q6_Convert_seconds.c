#include <stdio.h>
int main() {
    long long totalSeconds;
    if (scanf("%lld", &totalSeconds) == 1) {
        if (totalSeconds < 0) {
            totalSeconds = 0;
        }
        long long hours = totalSeconds / 3600;
        long long remaining = totalSeconds % 3600;
        long long minutes = remaining / 60;
        long long seconds = remaining % 60;
        printf("%lld %lld %lld\n", hours, minutes, seconds);
    }
    return 0;
}