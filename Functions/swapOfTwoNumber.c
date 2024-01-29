#include<stdio.h>

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;   
    //printf(" x = %d, y = %d\n",x,y);
}
int main(int argc, char const *argv[])
{
    int m, n;
    printf("\nEnter two numbers separated by spaces: ");
    scanf("%d %d", &m, &n);
    swap(&m, &n);
    printf("\nAfter swapping: m = %d \t n = %d\n\n", m, n);
    return 0;
}
