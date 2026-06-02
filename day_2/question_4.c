//to check if given numberr is palindrome or not
#include<stdio.h>
int main(){
    int n,digit,rev =0,original;
    printf("enter the number ");
    scanf("%d",&n);
    original = n;
    while(n !=0){
        digit = n%10;
        rev = rev*10 +digit;
        n =n/10;

    }
    if(rev == original){
        printf("the number is palindrome");
    }
    else{
        printf("the number is not palindrome"); 
    }
    return 0;
}