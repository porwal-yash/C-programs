#include <math.h>
#include <stdio.h>
int main()
{

    // code to find out the area of triangle 
    float base, height, area;
    printf("Enter base\n");
    scanf("%f", &base);
    printf("Enter Height\n");
    scanf("%f", &height);
    area = base * height / 2;
    printf("Area : %f", area);
    
    //code  to find area of triangle with different method  or we can say to find out the area of equilateral triangle
    printf("Sum of base and height is:- %f ",height+base);
    printf("Enter dimensions for triangle with different sides");
    float a,b,c,s;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    s=(a+b+c)/2;
    float area2;
    area2=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area : %f", area2);
    
    // code to find perimeter of triangle
    int length1, length2, length3, perimeter=0;                                 
    printf("\nFinds perimeter of a triangle\n------------------------");        
    printf("\nEnter Length1: ");                                                
    scanf("%d", &length1);                                                      
    printf("\nEnter Length2: ");                                                
    scanf("%d", &length2);                                                      
    printf("\nEnter Length3: ");                                                
    scanf("%d", &length3);                                                      
                                                                                
    perimeter = length1+length2+length3;                                        
                                                                                
    printf("Perimeter of a triangle is: %d", perimeter); 
    printf("thank you");
    
    return 0;
}
