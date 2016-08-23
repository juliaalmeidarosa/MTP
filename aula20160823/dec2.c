#include<stdio.h>
#include<time.h>
int main()
{
    srand(time(0));
    int numero,x,soma;
    printf("digite um numero:");
    scanf("%d",&numero);
    x=rand()%2;
    soma=x+numero;
    if(soma%2==0)
        printf("o numero e par\n");
    else
        printf("o numero e impar\n");
}
