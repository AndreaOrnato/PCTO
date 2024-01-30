#include<stdio.h>

int main()

{
    int n1;
    int n2;
    printf("Scrvi a che eta si puo prendere la patente nel tuo paese! \n");
    scanf("%d", &n1);
    printf("Adesso invece scrivi la tua età! \n");
    scanf("%d", &n2);
    if (n1<=n2)
    {
       printf("Corri a studiare che è il momento di prendere la patente! \n");
    }
    
    else
    {
        printf("Mi spiace ma divrai aspettare ancora un po per prendere la patente! \n");
    }

    return(0);
}