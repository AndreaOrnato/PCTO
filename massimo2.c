#include<stdio.h>
int R(int x,int y)
{
    if (x>y)
    {
        printf("Il numero %d è maggiore del numero %d.\n", x,y);
    }
    else
    {
        printf("Il numero %d è maggiore del numero %d.\n",y,x);
    }
}
int main()

{
    int x;
    int y;
    printf("Inserisci due  numeri.\n");
    scanf("%d %d", &x, &y);
    R(x,y);
    return(0);
}
    