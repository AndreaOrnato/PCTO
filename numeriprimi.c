#include<stdio.h>
int main()
{
    
    int n1;
    printf("Inserisci un numero e ti dirò se è un numero primo \n");
    scanf("%d", &n1);
    int x = n1 - 1;
    int y;
    int z = 0;
    
    while (x>1)
    {
        y= n1%x;
        x = x - 1;
        if (y==0) 
        {
            z = 1;
            break;
        }
    }
    
    if(z == 1)
    {
        printf("Il numero da te scelto non è un numero primo \n");
    }
    else
    {
        printf("Il numero da te scelto è un numero primo. \n");
    }
    return(0);

}