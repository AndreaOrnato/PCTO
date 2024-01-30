#include<stdio.h>
int main()
{
    int n1;
    int n2;
    int n3;
    printf("Dimmi la lunghezza di tre lati e ti diro se possono formare un triangolo \n");
    scanf(" %d %d %d", &n1, &n2, &n3);
    if (n1 + n2> n3 && n1+n3> n2 && n2+n3> n1)
    {
       printf("La lunghezza dei lati da te scelti possono formare un triangolo \n");
    }
    
    else
    {
        printf("La lunghezza dei lati da te scelti non possono formare un triangolo \n");
    }
    return(0);
}