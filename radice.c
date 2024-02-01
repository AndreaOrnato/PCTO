#include<stdio.h>

float radice(float r)
{
    float temp, sqrt;
   
    sqrt = r / 2;
    temp = 0;
    while(sqrt != temp)
    {
        temp = sqrt;
        sqrt = ( r/temp + temp) / 2;
    }
    return sqrt;
}
int main()
{
    float x;
    float y;
    float z;
    float p;
    float A;
    float r;
    printf("Dimmi il modulo di tre lati di un triangolo qualsiasi.\n");
    scanf("%f %f %f", &x,&y,&z);
    if (x+y>z && x+z>y && z+y>x)
    {
        p = (x + y + z)/2;
        r = (p*(p-x)*(p-y)*(p-z));
        A = radice(r);
        printf("Il perimetro del tuo triangolo: %.2f \nL'area del tuo triangolo: %.2f", p*2,  A );
    }
    else
    {
        printf("Devi scrivere le misure di un triangolo!\n");
    }
    return(0);
}