#include<stdio.h>
#include<stdint.h>
int main ()
{
    int num1, num2, soma=0;
    printf("digite um numero real\n");
    scanf("%d", &num1);
    printf("digite um segundo numero real\n");
    scanf("%d", &num2);
    soma=num1+num2;
    printf("\nEndereco de memoria do primeiro numero %p", &num1);
    printf("\nEndereco de memoria do segundo numero %p", &num2);
    printf("\nEndereco de memoria da soma %p", &soma);
    printf("\nsoma e igual a:%d", soma);
    return 0;
}
