//program to create fibonacci series 
#include <stdio.h>
int main(){
    int n ,a,b,c;
    printf("enter the number of terms :");
    scanf("%d",&n);
    a=0;
    b=1;
    for (int i=1;i<=n;i++){
        printf("%d\t",a);
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}