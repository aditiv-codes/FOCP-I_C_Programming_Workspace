#include <stdio.h>
int main(void){
    int marks;
    printf("enter ur marks:");
    scanf("%d",&marks);
    if(marks>=95){
        printf("You got A+");
    }
    else if(marks>=90){
        printf("You got A");
    }
    else if(marks>=80){
        printf("You got B+");
    }
    else if(marks>=70){
        printf("You got B");
    }
    else if(marks>=60){
        printf("You got C+");
    }
    else if(marks>=50){
        printf("You got C");
    }
    else if(marks>=40){
        printf("You got D+");
    }
    else if(marks>30){
        printf("You got D");
    }
    else{
        printf("You got F");
    }
}