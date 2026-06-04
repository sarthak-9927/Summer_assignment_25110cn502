//to find prime factor of the number 
#include<stdio.h>
int main(){
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    printf("the prime factors of %d are :\n",n);
    for (int i=2;i<=n;i++){
        while (n%i==0){
            printf("%d\t",i);
            n=n/i;
        }
    }
    
    return 0;
}