//program to find x^n without pow()
#include <stdio.h>
int main()
{
    int x, n, result = 1;
    printf("Enter the base: ");
    scanf("%d", &x);
    printf("Enter the power : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        result *= x;
    }
    printf("Result of %d^%d is %d\n", x, n, result);
    return 0;
}