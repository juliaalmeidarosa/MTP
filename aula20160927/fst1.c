#include<stdio.h>
struct divisao_inteiro{
    int quociente;
    int resto;
};
struct divisao_inteiro divisao(int dividendo, int divisor);
int main ()
{
    struct divisao_inteiro resposta;
    int dividendo, divisor;
    printf("Entre com o dividendo: ");
    scanf("%d", &dividendo);
    printf("Entre com o divisor: ");
    scanf("%d", &divisor);
    resposta=divisao(dividendo,divisor);
    printf("Quociente: %d, resto: %d\n", resposta.quociente, resposta.resto);
    return 0;
}
struct divisao_inteiro divisao(int dividendo, int divisor){
    struct divisao_inteiro resposta;
    resposta.quociente=dividendo/divisor;
    resposta.resto=dividendo%divisor;
    return resposta;
}
