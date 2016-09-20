#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main ()
{
    srand(time(0));
    int i,n1,n2,n3,n4,n5,n6, soma;
    n1=joga_dado();
    n2=joga_dado();
    n3=joga_dado();
    n4=joga_dado();
    n5=joga_dado();
    n6=joga_dado();
    soma=n1+n2+n3+n4+n5+n6;
    printf("A soma dos valores dos dados e %d.\n", soma);
    if(soma<21)
        printf("Voce perdeu!");
    else
        printf("Voce ganhou!");
    return 0;
}
int joga_dado()
{
    int numero=(rand()%6)+1;
    return numero;
}
