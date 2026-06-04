//to print the armstrong number in a range 
#include<stdio.h>
int main(){
    int n1,n2,temp,r,sum;
    printf("enter the range :");
    scanf("%d%d",&n1,&n2);
    printf("the armstrong numbers in the range %d to %d are :\n",n1,n2);
    for (int i=n1;i<=n2;i++){
        temp=i;
        sum=0;
        while (temp!=0){
            r=temp%10;
            sum=sum+r*r*r;
            temp=temp/10;
        }
        if (sum==i){
            printf("%d\t",i);
        }
    }
    
    return 0;
}