//to find lcm of two number
#include<stdio.h>
int main(){
    int a,b,lcm;
    printf("enter two numbers :");
    scanf("%d%d",&a,&b);
    for(int i=1;i<=a*b;i++){
        if(i%a==0&&i%b==0){
            lcm=i;
            break;
        }
    }
    printf("LCM of %d and %d is %d",a,b,lcm);
    return 0;
}