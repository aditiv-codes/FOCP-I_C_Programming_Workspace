#include <stdio.h>
int main(void){
    char name[20];
    printf("enter the product name:");
    scanf("%s",name);
    int quantity;
    printf("enter quantity:");
    scanf("%d",&quantity);
    float price;
    printf("enter the unit price:");
    scanf("%f",&price);
    char code;
    printf("enter the category code:");
    scanf(" %c",&code);
    unsigned int stock_count;
    printf("enter the stock count");
    scanf("%u",&stock_count);
    printf("===================================\n");
    printf("         Product Card\n");
    printf("===================================\n");
    printf("Product Name     :      %s\n", name);
    printf("Quantity         :      %d\n", quantity);
    printf("Unit price       :      %.2f\n", price);
    printf("Category Code    :      %c\n", code);
    printf("stock count      :      %u\n", stock_count);
    printf("===================================");
    return 0;
}