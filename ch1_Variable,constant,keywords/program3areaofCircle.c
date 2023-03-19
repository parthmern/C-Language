#include <stdio.h>

int main()
{
    float radius;
    float pi = 3.14;

    printf("Enter the RADIUS of circle to find out the area=");
    scanf("%f",&radius);

    float area= pi * radius * radius ;

    printf("AREA of circle which has radius as %f unit = %f sq.unit",radius,area);


    return 0;
}