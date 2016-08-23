#include<stdio.h>
int main ()
{
    int B, P, resultado=1, i=0;
    printf("digite a base:");
    scanf("%d", &B);
    printf("digite a potencia:");
    scanf("%d", &P);
    while(i<P)
    {
        resultado=resultado*B;
        i++;
    }
    printf("a potenciacao e:%d", resultado);
    return 0;
}
