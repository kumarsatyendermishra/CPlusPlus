#include <stdio.h>

int main(int argc, char const *argv[])
{
    int *p;
    int *fun(); /* prototype declaration */
    p = fun();
    printf("%p\n", p);
    printf("%d\n", *p);
    return 0;
}
int *fun(){
    static int t = 10;
    return (&t);
}
