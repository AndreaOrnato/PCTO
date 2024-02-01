#include<stdio.h>
int R(int x)
{
    if ( x%2==0)
    {
        printf("Il numero da te scelto è pari.\n");
    }
    else
    {
        printf("Il numero da te scelto è dispari.\n");
    }
}


int main()
{
    int x;
    printf("Dimmi un numero\n");
    scanf("%x",&x);
    R(x);
    return(0);
}