#include<stdio.h>

int main()

{
    int n1;
    int n2;
    printf("scrivi due numeri \n");
    scanf("%d %d", &n1, &n2);

    if (n1>=n2)
    {
       printf("Il primo numero è maggiore del secondo! \n");
    }
    
    else
    {
        printf("il secondo numero è maggiore del primo! \n");
    }

    return(0);
}
