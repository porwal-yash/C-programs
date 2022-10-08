#include <stdio.h>
#include <math.h>
void main()
{
    int n, i, sum = 0;
    printf("Enter number\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum - (2 * i - 1) * (int)pow(-1, i);
    }
    printf("Sum of series is : %d", sum);
}
