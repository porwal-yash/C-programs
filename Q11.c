#include <stdio.h>
void ap(int *rad)
{
    float area, pie;
    int rrad;
    rrad = *rad;
    area = (22.0 / 7.0) * (rrad * rrad);
    printf("Area of circle with radius %d is : %f\n", rrad, area);
    pie = 2.0 * 22.0 / 7.0 * rrad;
    printf("Perimeter of circle with radius %d is : %f", rrad, pie);
    printf("Thank You");
}
void main()
{
    printf("Manpreet Singh 1000013993\n");
    int rad, area, pie;
    printf("Enter radius\n");
    scanf("%d", &rad);
    ap(&rad);
}
