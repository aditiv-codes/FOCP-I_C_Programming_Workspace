#include <stdio.h>
int main(void){
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    if (num>0){
        printf("number is positive");
    }
    else if(num<0){
        printf("number is negative");
    }
    else if(num=0){
        printf("number is 0");
    }
    else{
        printf("the no. is not real");
    }
    return 0;
}