

#include<stdio.h>

#define SQUARE(s)(s*s)
#define CIRCLE_AREA(r)(3.14 * SQUARE(r))
#define CIRCLE_PERIMETER(r)(2 * 3.14 * r)
#define PI 3.14159265358979323846264338327950288
#define EVEN 0
#define ODD 1
int main(int argc, char const *argv[])
{
    /* code */
    int radius;
    double area;
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);
    area = CIRCLE_AREA(radius);
    printf("Area of circle of radius %d: %0.2f\n", radius, area);
    if(radius % 2 == EVEN) printf("Radius of circle is even");
    if(radius % 2 == ODD) printf("Radius of circle is odd");
    return 0;
}
