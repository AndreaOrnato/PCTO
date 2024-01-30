#include<stdio.h>
int main()
{
    int n1;
    int n2;
    int n3;
    printf("Inserisci tre numeri e scopri se sono in sequenza aritmetica. \n");
    scanf("%d %d %d" ,&n1, &n2, &n3);
    if (n2-n1 == n3-n2)
    {
        printf("I numeri da te scelti sono in sequenza aritmetica! \n");
    }
    else 
    {
        printf("I numeri da te scelti non sono in sequenza aritmetica, mi dispiace! \n");
    }
    return(0);



}