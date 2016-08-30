#include<stdio.h>
#include<ctype.h>
#include<math.h>
int main()
{
    double numero, base, resultado;
    printf("digite um numero: ");
    scanf("%lf", &numero);
    printf("digite uma base: ");
    scanf("%lf", &base);
    resultado=log10(numero)/log10(base);
    printf("log e %lf", resultado);
    return 0;
}
