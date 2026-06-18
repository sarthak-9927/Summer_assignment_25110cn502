//program to convert decimal to binary
#include <stdio.h>

int main() {
    int n, binary = 0, base = 1, r;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    while (n > 0) {
        r = n % 2;
        binary = binary + r * base;
        n = n / 2;
        base = base * 10;
    }
    printf("Binary number: %d\n", binary);
    return 0;
}