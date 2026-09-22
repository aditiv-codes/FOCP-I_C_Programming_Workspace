#include <stdio.h>
int main(void){
    int x=10;
    int y=2;
    int z=5;
    int result=x++ + --y + ++z;
    printf("x=%d,y=%d,z=%d result=%d",x,y,x,result);
    return 0;
}