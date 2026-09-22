#include <stdio.h>
int main(void){
    int a,b;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);
    if(b>a){
        printf("%d is greater than %d",b,a);
    }
    else if(a==b){
        printf("%d and %d are equal",a,b);
    }
    else{
        printf("%d is greater than %d",a,b);
    }
    return 0;
}