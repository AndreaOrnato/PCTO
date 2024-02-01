#include<stdio.h>
long fattoriale(float z)
{
    long x = 1;
    long y = 1;
    while (x <= z)
    {
        y = y * x;
        x = x + 1;
    }
    
    return(y);
}
    

int main()
{
    float z;
    printf("Dimmi un numero.\n");
    scanf("%f",&z);
    printf("%.1ld\n",fattoriale(z) );
    return(0);
}