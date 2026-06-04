//to find largest prime factor of the number
#include<stdio.h>
int main(){
    int n, largest_factor = 2;
    printf("enter the number :");
    scanf("%d",&n);
    for (int i=2; i<=n; i++){
        while (n%i==0){
            if (i > largest_factor){
                largest_factor = i;
            }
            n = n/i;
        }
    }
    printf("the largest prime factor of the number is : %d", largest_factor);
    return 0;
}