#include<stdio.h>

int main()

{
    int n1;
    int n2;
    
    printf("Scrivi due numeri \n");
    scanf("%d %d", &n1, &n2);

    if (n1%n2 == 0)
    {
       printf("Il primo numero è multiplodel secondo! \n");
    }
    
    else
    {
        printf("Il primo numero non è multiplo del secondo! \n");
    }

    return(0);
}