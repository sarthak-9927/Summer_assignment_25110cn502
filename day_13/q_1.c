//program to input and display array elements
#include<stdio.h>
int main(){
    int arr[100],n;
    printf("enter the number of element in an array:");
    scanf("%d",&n);
    printf("enter the element in an array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("the element of the array are:");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}