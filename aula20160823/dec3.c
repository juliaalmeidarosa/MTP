#include<stdio.h>
#include<time.h>
int main()
{
    srand(time(0));
    int d1, d2, d3, soma;
    d1=rand()%6+1;
    d2=rand()%6+1;
    d3=rand()%6+1;
    soma=d1+d2+d3;
    if(soma==7||soma==11)
        printf("voce ganhou");
    else
        printf("voce perdeu");
    return 0;
}
