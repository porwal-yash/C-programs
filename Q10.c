#include <stdio.h>
int power(int x, int y)
{
        if (y > 0)
                return x * power(x, y - 1);
        else
                return 1;
}
void main()
{
        printf("Power of a number x\n");
        int x, y, ans;
        printf("Enter x\n");
        scanf("%d", &x);
        printf("Enter y\n");
        scanf("%d", &y);
        ans = power(x, y);
        printf("%d", ans);
}
