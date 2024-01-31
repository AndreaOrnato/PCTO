#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
        int x;
        unsigned short y;
        short z = 0;
        printf("Scegli un numero e prova a indovinare!\n");
        
        while (x!=0)
        {
        
        scanf("%d", &x); 
       
        unsigned short y=rand() % 20 + 1;   
        if (x==y)
        {
            printf("Bravo hai indovinatob.");
            z=z+1;
            printf("Ora hai %d punti.\n", z);
        }
        else if (x==0)
        {
           break;
        }
        else
        {
            printf("Mi dispiace il numero giusto era %d. \nRitenta sarai più fortunato, oppure clicca 0 per uscire.\n", y);
        }
        
    }
    



}