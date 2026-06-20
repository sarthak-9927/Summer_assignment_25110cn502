//program to moves all zeroes to the end of the array
#include <stdio.h>

int main()
{
    int arr[100], n, i, j;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // Move all zeroes to the end of the array
    for (i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            for (j = i; j < n - 1; j++)
            {
                arr[j] = arr[j + 1];
            }
            arr[n - 1] = 0;
        }
    }
    printf("Array after moving all zeroes to the end: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
