//program to find frequency of an element in an array
#include <stdio.h>
int main() {
    int arr[100], n, a, frequency = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to find its frequency: ");
    scanf("%d", &a);

    for (int i = 0; i < n; i++) {
        if (arr[i] == a) {
            frequency++;
        }
    }

    printf("Frequency of %d in the array is: %d\n", a, frequency);

    return 0;
}