#include<stdio.h>
int main()
{
    int x;
    printf("Francesca quanti anni hai? \n");
    scanf("%d", &x);
    if (x<18)
    {
        printf("Lascia stare devi ancora crescere per prendere la patente.\n");
    }
    else if (x>=18)
    {
        printf("Francesca cazzo vai a studiare.\n");
    }
    return(0);
    
}