#include<stdio.h>

int main(int argc, char const *argv[])
{
    // int a, b = 5;
    // a = b + NULL;
    // printf("a = %d\n", a);
    printf("Output:\n%ld %ld\n", sizeof(NULL), sizeof(""));
    printf("size of char type is %ld\n", sizeof(char));
    printf("size of int type is %ld\n", sizeof(int));
    printf("size of long type is %ld\n", sizeof(long));
    return 0;
}
