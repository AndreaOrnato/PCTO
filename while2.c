#include<stdio.h>
int main()
{
    long x = 1;
    long y = 1;
    long n1;
    printf("dimmi un numero e ti calcolo il fattoriale \n");
    scanf("%ld", &n1);
    while (x <= n1)
    {
        y = y * x;
        x = x + 1;
    }
     printf("%ld\n",y);
    return(0);
}