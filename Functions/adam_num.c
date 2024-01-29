#include<stdio.h>

//prototype of th functions
short isPrime(int x);
int reverse(int x);

int main(int argc, char const *argv[])
{
    int m, n,sqm, revOfm, sqRevOfm, revOfsqRevOfm, count=0;
    printf("\nINPUT\nm = ");
    scanf("%d", &m);
    printf("\nn =");
    scanf("%d", &n);
    if (m > n){
        printf("\nINVALID INPUT\n");
        return 0; //exit from main function
    }
    for(printf("\nTHE PRIME-ADAM INTEGERS ARE:\n");m <= n;m++){
        if(isPrime(m)){
            sqm = m * m;
            revOfm = reverse(m);
            sqRevOfm = revOfm * revOfm;
            revOfsqRevOfm = reverse(sqRevOfm);
            if(sqm == revOfsqRevOfm){
                printf("%d ", m);
                count++;
            }
        }
    }
    if(count == 0){
        printf("NIL");
    }
    printf("\nFREQUENCY OF PRIME-ADAM INTEGER: %d\n", count);
    return 0;
}

short isPrime(int x){
    int i;
    for(i=2;i<=x/2;i++){
        if(x%i==0){
            return 0;
        }
    }
    return 1;
}

int reverse(int x){
    int rev = 0;
    while(x!= 0){
        rev = rev * 10 + x % 10;
        x /= 10;
    }
    return rev;
}
