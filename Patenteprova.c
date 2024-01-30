#include <stdio.h>

int main()



{
    int n;
    printf("Scrivi la tua età e scopri se puoi prendere la patente in Italia Inghilterra America o Australia! \n");
    scanf("%d", &n);

    if (n>=18)
    {
      printf("Sei fortunato puoi prendere la patente in italia. \n");
    }
    
    else
    {
        printf("Mi dispiace devi ancora aspettare per prendere la patente in Italia. \n");
    }

     

    if (n>=17)
    {
      printf("Sei fortunato puoi prendere la patente in Inghilterra. \n");
    }
    
    else
    {
        printf("Mi dispiace devi ancora aspettare per prendere la patente in Inghilterra. \n");
    }

    

    if (n>=16)
    {
      printf("Sei fortunato puoi prendere la patente in America. \n");
    }
    
    else
    {
        printf("Mi dispiace devi ancora aspettare per prendere la patente in America. \n");
    }
    if (n>=21)
    {
      printf("Sei fortunato puoi prendere la patente in Australia. \n");
    }
    
    else
    {
        printf("Mi dispiace devi ancora aspettare per prendere la patente in Australia. \n");
    }
    return (0);
}