//program to find the sum of digits of a number using recursion
#include <stdio.h>

int sumOfdigits(int n) {
    if (n == 0)
        return 0;
    else
        return (n % 10) + sumOfdigits(n / 10);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Sum of digits of %d is %d\n", num, sumOfdigits(num));
    return 0;
}