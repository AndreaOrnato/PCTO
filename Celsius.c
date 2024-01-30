#include<stdio.h>
int main()

{
   
    float c;

    printf("Inserisci una temperatura in gradi Celsius. \n");
    scanf("%f", &c);

    
    float f = c * 9/5 + 32;
    float k = c + 273.5;

    if (c< -273.15)
    {
        printf("Errore \n");
    }
    
    else
    {
        printf("La tua temperatura in Kelvin è %.2f. \n La tua temperatura in Fhareneit è %.2f \n" , k, f );

    }
    return(0);
    
    



}