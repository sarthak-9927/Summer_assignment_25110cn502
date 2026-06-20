//program to write a function to find maximum of two numbers
#include <stdio.h>

int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("Maximum of %d and %d is %d\n", x, y, max(x, y));
    return 0;
}