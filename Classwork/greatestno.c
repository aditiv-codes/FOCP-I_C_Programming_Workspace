#include <stdio.h>
int main(void){
    int a,b,c,greatest;
    printf("enter the first no.\n");
    scanf("%d",&a);
    printf("enter the second no.\n");
    scanf("%d",&b);
    printf("enter the third no.\n");
    scanf("%d",&c);
    greatest=(a>b)? ((a>c)? a:c):((b>c)? b:c);
    printf("%d is the greatest no. ",greatest);
}