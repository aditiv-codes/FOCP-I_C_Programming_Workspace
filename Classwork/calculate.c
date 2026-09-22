#include <stdio.h>
int main(void){
    int a,b;
    printf("enter first no.:");
    scanf("%d",&a);
    printf("enter second no.:");
    scanf("%d",&b);
    char c;
    printf("enter the operator[+,-,/,*,%%]:");
    scanf(" %c",&c);
    if (c=='+'){
        printf("%d",a+b);
    }
    else if(c=='-'){
        printf("%d",a-b);
    }
    else if(c=='/' && b!=0){
        printf("%d",a/b);
    }
    else if(c=='*'){
        printf("%d",a*b);
    }
    else if(c=='%%'){
        printf("%d",a%b);
    }
    return 0;
}