#include <stdio.h>
int main(void){
    printf("hello %s %s", "students", "everyone\n");
    printf("%15s hello", "everyone");
    int count= 12;
    double price=12.75;
    char grade='B';
    printf("count: %d\n", count);
    printf("price: %lf\n", price);
    printf("grade: %c\n", count);
    printf("count: %10d\n", count);
    printf("price: %.2f\n", price);
    printf("grade: %c\n", grade);
}