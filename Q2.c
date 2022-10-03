#include <stdio.h>
int main()
{
    int n, x, sum = 0;
    printf("Enter number\n");
    scanf("%d", &n);
    x = n;
    while (n > 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }
    printf("Sum of digits of %d is : %d", x, sum);
    
    return 0;
}
