#include<stdio.h>
struct soma_racional{
    int numerador;
    int denominador;
};
struct soma_racional soma(int numerador1, int denominador1, int numerador2, int denominador2);
int main ()
{
    struct soma_racional resposta;
    int numerador1, denominador1, numerador2, denominador2, resposta_numerador, resposta_denominador;
    printf("Entre com o primeiro racional: ");
    scanf("%d / %d", &numerador1, &denominador1);
    printf("Entre com o segundo racional: ");
    scanf("%d / %d", &numerador2, &denominador2);
    resposta=soma(numerador1,denominador1, numerador2, denominador2);
    printf("soma:%d /%d\n", resposta.numerador, resposta.denominador);
    return 0;
}
struct soma_racional soma(int numerador1, int denominador1, int numerador2, int denominador2){
    struct soma_racional resposta;
    resposta.numerador=denominador2*numerador1 + denominador1*numerador2;
    resposta.denominador=denominador1*denominador2;
    return resposta;
}
