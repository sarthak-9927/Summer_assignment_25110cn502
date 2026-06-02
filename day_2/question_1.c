// Write a program to find the sum of digits of a number
#include<stdio.h>
int main(){
    int n,digit;
    printf("enter number of which you want to find sum :");
    scanf("%d",&n);
    int sum = 0;
    while(n != 0){
        digit = n % 10;
        sum = sum + digit;
        n =n/10;
    }
    printf("sum of digits is %d",sum);

    return 0;
}