#include<stdio.h>
int prime(int n)
{
    static int i=1,c=0;
    if(i>n)
    {
        return 0;
    }
    else
    {
        if(n%i==0)
        c++;
        i++;
        prime(n);
    }
    return c;
}
void main()
{
    int n,f;
    printf("Enter value of n\n");
    scanf("%d ",&n);
    f=prime(n);
    if(f==2)
    printf("%d is prime",n);
    else
    printf("%d is not prime",n);
}
