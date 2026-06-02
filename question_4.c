#include<stdio.h>
int main(){
    int n;
    printf("enter a number of which you want to count the digits : ");
    scanf("%d",&n);
    int count = 0;
    while(n != 0)
    {
        n = n/10;
        count++;
    }
    printf("number of digits in the entered number is %d",count);
    return 0;
}