#include<stdio.h>
#include<ctype.h>
#include<math.h>
int main()
{
    double lado1, lado2, lado3, angulo;
    printf("escreva um lado do triangulo:");
    scanf("%lf",&lado1);
    printf("escreva o outro lado do triangulo:");
    scanf("%lf",&lado2);
    printf("escreva o angulo em radianos entre os lados do triangulo:");
    scanf("%lf",&angulo);
    lado3=sqrt(lado1*lado1+lado2*lado2-2*lado1*lado2*cos(angulo));
    printf("%lf\n", lado3);
    return 0;
}
