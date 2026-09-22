#include <stdio.h>
int main(void){
    int age;
    printf("enter the age:");
    scanf("%d",&age);
    if(age<=12 && age>=0){
        printf("child");
    }
    else if(age>=13 && age<=19){
        printf("teenager");
    }
    else if(age>=20 && age<=59){
        printf("adult");
    }
    else if(age>=60){
        printf("senior citizen");
    }
    else{
        printf("the age is not realistic");
    }
    return 0;
}