#include<stdio.h>

int main(int argc, char const *argv[])
{
    int x, y;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);
    int result = x + y;
    printf("The result is %d\n", result);
    return 0;
}
