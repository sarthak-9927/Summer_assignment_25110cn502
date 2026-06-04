//program to check strong number 
#include<stdio.h>
int main(){
    int n,temp,r,sum=0,fact;
    printf("enter the number :");
    scanf("%d",&n);
    temp=n;
    while (temp!=0){
        r=temp%10;
        fact=1;// calculating the factorial
        for (int i=1;i<=r;i++){
            fact=fact*i;
        }
        sum=sum+fact;//sum of factorial of each digits
        temp=temp/10;
    }
    if (sum==n){
        printf("%d is a strong number",n);
    }
    else{
        printf("%d is not a strong number",n);
    }
    
    return 0;
}