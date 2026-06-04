// to print prime number in a range
#include <stdio.h>
int main()
{
    int n1, n2, flag;
    printf("enter the range :");
    scanf("%d %d", &n1, &n2);
    for (int i = n1; i <= n2; i++)
    {
        flag = 0;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("%d \t", i);
        }
    }
    return 0;
}