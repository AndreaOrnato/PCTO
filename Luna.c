#include<stdio.h>
int main()

{
int n1;
int luna = 1969;
printf("Inserisci la tu data di nascita. \n");
scanf("%d", &n1);
int x = n1 - luna;
int y = luna - n1;

if (n1==luna)
{
    printf("Che fortuna! Sei nato lo stesso anno dello sbarco sulla luna \n");
}
else if (n1 > luna)
{
    printf("Sei nato %d anni dopo lo sbarco sulla luna \n" ,x);
}
else
{
    printf("Sei nato %d anni prima dello sbarco sulla luna \n " ,y);
}
return(0);

}