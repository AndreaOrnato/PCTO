#include<stdio.h>

void stampaCubo()


{
    int numero;
    int cubo;

    printf("Inserisci un numero. \n");
    scanf(" %d", &numero);
    cubo= numero * numero * numero;
    

}

int main()
{
    stampaCubo();
    stampaCubo();
    stampaCubo();
    stampaCubo();
    stampaCubo();

    return (0);
}