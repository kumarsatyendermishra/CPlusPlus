#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 5;
    printf("Value of i = %d\n", i);
    printf("Address of i = %p\n", &i);
    printf("Value of i = %d\n", *(&i));
    return 0;
}
