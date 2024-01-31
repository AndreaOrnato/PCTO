#include<stdio.h>
int main()

{
    float n1 = 0;
    float y = 0;
    float x = 0;
    
    while (n1 >= 0)
    {
        printf("Inserisci un numero \n");
        scanf("%f", &n1);
        if (n1<0)
        {
            printf("errore \n");
            break;
        }
        
        y = y + 1;
        x = x + n1;
        printf("La media è: %.2f \n", x / y);
    }
        

        return(0);
    
    



}