//program to count even and odd numbers in an array
#include <stdio.h>

int main() {
    int arr[100], n;
    int even = 0, odd = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    printf("Number of even elements in the array: %d\n", even);
    printf("Number of odd elements in the array: %d\n", odd);

    return 0;
}