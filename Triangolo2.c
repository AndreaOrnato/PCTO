#include<stdio.h>
int main()

{
    int n1;
    int n2;
    int n3;
    printf("Dimmi la lunghezza di tre lati di un triangolo e ti dirò se è scaleno, isoscele o equilatero \n");
    scanf(" %d %d %d", &n1, &n2, &n3);
    if (n1 + n2> n3 && n1+n3> n2 && n2+n3> n1)
    {
        if (n1!= n2 && n2!=n3 && n1!=n3 )
    {
        printf("Il tuo triangolo è scaleno \n");
    }
    
        else if (n1==n2 && n2==n3 && n3==n1)
    {
        printf("il tuo triangolo è equilatero \n");
    }

        else
    {
        printf("Il tuo triangolo è isoscele \n");   
    }
    }
    else
    {
        printf("Le misure da te scelte non formano un triangolo \n");
    }
    return(0);
}