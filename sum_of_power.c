#include <stdio.h>
#include <math.h>
void main()
{
    printf("Kshitij Gupta\n");
    int n, sum = 0, i;
    printf("Enter power of values whose sum is needed to be found : ");
    scanf("%d", &n);
    for (i = 1; i <=10; i++)
        sum = sum + pow(i,n);
    printf("Sum of first 10 number with power %d is %d\n", n, sum);
}