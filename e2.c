#include<stdio.h>

void Mate()
{
    float x;
    float y;
    int z;
    printf("Inserisci due numeri. \n");
    scanf("%f %f", &x, &y);
    printf("Adesso scegli un numero da 1 a 4 per decidere quale operazione vuoi che avvenga tra i due numeri.\n 1)Addizione.\n 2)Sottrazione.\n 3)Moltiplicazione.\n 4)Divisione\n ");
    scanf("%d", &z);
    
    if (z==1)
    {
        printf("%.2f", x+y);
    }
    else if (z==2)
    {
        printf("%.2f", x-y);
    }
    else if (z==3)
    {
        printf("%.2f", x*y);
    }
    else if (z==4)
    {
        printf("%.2f", x/y);
    }
    else
    {
        printf("Inserisci un comando valido.\n");
    }
    
}

int main()
{
    Mate();
}