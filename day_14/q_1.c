//programto linear search an element in an array
#include<stdio.h>
int main(){
    int arr[100],n,a,flag=0;
    printf("enter the number of element in an array:");
    scanf("%d",&n);
    printf("enter the element in an array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the element to be searched:");
    scanf("%d",&a);
    for(int i=0;i<n;i++){
        if(arr[i]==a){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("%d is found in the array.\n",a);
    }
    else{
        printf("%d is not found in the array.\n",a);
    }
    return 0;
}