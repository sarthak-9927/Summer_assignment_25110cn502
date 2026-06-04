//to find nth fibonacci term 
#include<stdio.h>
int main(){
    int n,a,b,c;
    printf("enter the term you want to find :");
    scanf("%d",&n);
    a=0;
    b=1;
    if (n==1){
        printf("the %d term is :%d",n,a);
    }
    else if (n==2){
        printf("the %d term is :%d",n,b);
    }
    else{
        for (int i=3;i<=n;i++){
            c=a+b;
            a=b;
            b=c;
        }
        printf("the %d term is :%d",n,c);
    }

    return 0;
}