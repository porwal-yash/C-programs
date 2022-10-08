#include <stdio.h>
int main()
{
    
    float sal, gs, da, hra;
    printf("Enter Ramesh's basic salary\n");
    scanf("%f", &sal);
    da = sal * 40 / 100;
    hra = sal * 20 / 100;
    gs = sal + da + hra;
    printf("Ramesh's gross salary is : %f", gs);
    
    return 0;
}
