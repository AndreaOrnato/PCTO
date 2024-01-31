#include<stdio.h>

void lettera()
{
    char lettera;

    printf("Inserisci una lettera. \n");
    scanf("%c" , &lettera);
    if (lettera == 97 || lettera == 101 || lettera == 105 || lettera == 111 || lettera == 117 || lettera == 65 || lettera == 69 || lettera == 73 || lettera == 79 || lettera == 85)
    {
        printf("La lettera è una vocale.\n");
    }
    else if ( (0 <= lettera && lettera <= 64) || (91 <= lettera && lettera <= 96) || (123 <= lettera && lettera <= 127))
    {
       printf("Devi inserire una lettera! \n");
    }
    
    else
    {
        printf("La lettera è una consonante");
    }

}
int main()

{
    lettera();
}