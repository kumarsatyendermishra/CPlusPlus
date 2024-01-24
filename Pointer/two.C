#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i = 10;
    int *j = &i;
    printf("Value of i=%d\n", i);
    printf("Value of j=%p\n", j);
    printf("Value of i=%d\n", *j);
    printf("Address of j=%p\n", &j);
    printf("Address of i=%p\n", &i);
    return 0;
}
