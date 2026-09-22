#include <stdio.h>
int main(void){
    int age;
    char nationality;
    printf("enter ur age:");
    scanf("%d",&age);
    printf("enter 'I' if nationality is indian");
    scanf(" %c",&nationality);
    if (age>=18 && nationality=='I'){
        printf("ur eligible for vote");
    }
    else{
        printf("ur not eligible");
    }
}