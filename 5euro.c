#include<stdio.h>
int main()

{
    float x; 
    while (x>= 0)
    {
        printf("Quanti oggetti hai comprato? \n");
        scanf("%f", &x);
        if (x < 0)
        {
        break;
        }
        
        else if (x <= 30)
        {
            printf("Il tuo totale è %.2f . \n", x*5);
        }
        else if (x<=50)
        { 
            printf("Il tuo totale è %.2f .  \n", x*5 - x*5*1/10);
        }
        else
        {
            printf("Il tuo totale è %.2f . \n", x*5 - x*75/100);
        }
    }
    
    return(0);




}