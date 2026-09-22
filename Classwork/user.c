#include <stdio.h>
int main(void){
    int userid=20;
    int pass=1234;
    scanf("%d",&userid);
    scanf("%d",&pass);
    if(userid==20 && pass==1234){
        printf("login successful");
    }
    else if(userid==20 && pass!=1234){
        printf("login unsuccessful");
    }
    else{
        printf("invalid user id");
    }
}