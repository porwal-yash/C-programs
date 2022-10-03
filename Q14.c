#include <stdio.h>
#include <string.h>
void main()
{
    char a[20];
    printf("Enter string\n");
    scanf("%s", &a);
    int l, i, f = 0;
    l = strlen(a);
    for (i = 0; i < l; i++)
    {
        if (a[i] != a[l - i - 1])
        {
            f = 1;
            printf("%s is not Palindrome", a);
            break;
        }
    }
    if (f == 0)
        printf("%s is Palindrome", a);
}
