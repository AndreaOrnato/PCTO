#include<stdio.h>

int main()
{
    char stringa[100];
    printf("Inserisci una parola a tuo piacimento.\n");
    scanf("%79[^\n]", stringa);
    int x = 0;

    while (stringa[x]!='\0')

    {
        if (stringa[x]>='a' && stringa[x]<='z')
        {
           stringa[x] = stringa[x] - 32;
        }
        x = x + 1;
    }
     printf("%s\n",stringa);
     return(0);
}
        
    