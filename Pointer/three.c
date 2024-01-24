#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i = 10;
    int *p; //single pointer
    int **pp;   //double pointer.
    p = &i;
    pp = &p;

    printf("\nAddress of i = %p", &i);
    printf("\nAddress of i = %p", p);
    printf("\nAddress of i = %p", *pp);
    printf("\nAddress of p = %p", &p);
    printf("\nAddress of p = %p", pp);
    printf("\nAddress of pp = %p", &pp);

    printf("\nValue of i = %d", i);
    printf("\nValue of i = %d", *p);
    printf("\nValue of i = %d", **pp);
    printf("\nValue of p = %p", p);
    printf("\nValue of pp = %p\n", pp);
    return 0;
}
