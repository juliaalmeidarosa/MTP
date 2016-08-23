#include<stdio.h>
int main()
{
    int numero, fatorial=1,i;
    printf("digite um numero para calcular o fatorial:");
    scanf("%d", &numero);
    for(i=2;i<=numero;i++)
        fatorial=fatorial*i;
    printf("fatorial de %d e %d\n", numero, fatorial);
    return 0;
}
