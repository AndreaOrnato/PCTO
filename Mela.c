#include <stdio.h>

int main()
{
    int e1;
    int e2;
    int e3;
    int e4;
    printf("Scrivi l' età di Francesca! \n" );
    scanf("%d", &e1);
    printf("Scrivi l' età di Eleonora! \n");
    scanf("%d", &e2);
    printf("Scrivi l' età di Andrea! \n" );
    scanf("%d", &e3);
    printf("Scrivi l' età di Flavio! \n");
    scanf("%d", &e4);
    int x = e1 + e2 + e3 + e4;
    printf(" Il risultato è %d \n " ,x);
    return(0);
}
