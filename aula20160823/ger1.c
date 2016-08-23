#include<stdio.h>
#include<time.h>
int main()
{
    int numero, i;
    printf("digite um numero:");
    scanf("%d",&numero);
    for (i=2;i<numero;i++)
    {
        if(numero%i==0)
        {
            printf("nao e primo\n");
            break;
        }
    }
    if(i==numero)
        printf("primo\n");
    return 0;
}
