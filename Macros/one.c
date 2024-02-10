#include<stdio.h>

// #define PI 3.141592653589793
#define PI (22.0/7)
int main(int argc, char const *argv[])
{
    /* code */
    int radius;
    double area;
    scanf("%d", &radius);
    area = PI * radius * radius;
    printf("Area of circle of radius %d: %0.2f\n", radius, area);
    return 0;
}
