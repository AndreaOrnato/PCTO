#include<stdio.h>
void Cordinate()
{
     float x;
    float y;
    printf("Dimmi in coordinate x e y in ordine e ti dico in che quadrante si trova il punto da te scelto.\n");
    scanf("%f %f", &x, &y);
    
    
    if (x==0 && y==0)
    {
        printf("Il tuo punto si trova sull'origine.\n");
    }
    else if (x==0 && y!=0)
    {
        printf("Il tuo punto si trova sulla retta delle ascisse.\n");
    }
    else if (x!=0 && y==0)
    {
        printf("Il tuo punto si trova sulla retta delle ordinate.\n");
    }
    else if (x>0 && y>0)
    {
        printf("Il tuo punto si trova nel primo quadrante.\n");
    }
    else if (x<0 && y>0)
    {
        printf("Il tuo punto si trova nel secondo quadrante.\n");
    }
    else if (x<0 && y<0)
    {
        printf("Il tuo punto si trova nel terzo quadrante.\n");
    }
     else if (x>0 && y<0)
    {
        printf("Il tuo punto si trova nel quarto quadrante.\n");
    }
}
int main()
{
    Cordinate();
}