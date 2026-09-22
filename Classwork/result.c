#include <stdio.h>
int main(void){
    int age=18;
    unsigned int attempts=3;
    double percentage=87.50;
    char grade='A';
    char name[]="Riya";
    int n=7;
    double x=12.345;
    char ch= 'Z';
    printf("n=%d\n", n);
    printf("x=%.2f\n", x);
    printf("[%5d]\n",n);
    printf("%c %d%%\n", ch, 80);
    printf("Name  :%s\n",name);
    printf("Age  :%d\n", age);
    printf("Attempts:%u\n", attempts);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade :%c\n", grade);
    return 0;
}