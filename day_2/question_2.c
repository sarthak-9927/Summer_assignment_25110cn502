//to find the reverrse of the given number 
#include<stdio.h>
int main(){
    int n,digit,rev = 0;
    printf("enterr the number you want to reverse :");
    scanf("%d",&n);
    while(n != 0){
        digit = n % 10;
        rev = rev * 10 + digit;
        n =n/10;
    }
    printf("reversed number is %d",rev);
    return 0;
}