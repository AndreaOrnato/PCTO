#include<stdio.h>
int main()

{
    int n1;
    printf("Dimmi un anno e ti dirò se è bisestile o meno. \n");
    scanf("%d" , &n1);
    if (n1%400==0)
    {
     printf("L'anno da te scelto è un anno bisestile \n");
    }
    else if (n1%4==0 && n1%100!=0)
        {
          printf("L'anno da te scelto è un anno bisestile \n ");
        }
    else
        {
          printf("L'anno da te scelto non è bisestile");
        }
        return(0);
    }
    



