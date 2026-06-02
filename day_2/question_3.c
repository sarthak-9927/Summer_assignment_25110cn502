// to find the product of the digits of the given number
#include<stdio.h>
int main(){
    int n,digit,product = 1;
    printf("enter number of which you want to find product :");
    scanf("%d",&n);
    while(n != 0){
        digit = n % 10;
        product = product * digit;
        n =n/10;
    }
    printf("product of digits is %d",product);

    return 0;
}