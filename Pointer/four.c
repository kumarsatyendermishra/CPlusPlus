#include <stdio.h>

int main(int argc, char const *argv[])
{
    char c, *cc;
    int i, *ii;
    float f, *ff;
    c = 'A';
    i = 10;
    f = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421;
    ii = &i;
    ff = &f;
    cc = &c;
    printf("Address contained in cc = %p\n", cc);
    printf("Address contained in ii = %p\n", ii);
    printf("Address contained in ff = %p\n", ff);
    printf("Value of c = %c\n", *cc);
    printf("Value of i = %d\n", *ii);
    printf("Value of f = %f\n", *ff);
    return 0;
}
