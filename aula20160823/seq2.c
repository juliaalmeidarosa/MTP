#include<stdio.h>
int main ()
{
    float base,altura, area;
    printf("digite a base do triangulo");
    scanf("%f",&base);
    printf("digite a altura do triangulo");
    scanf("%f",&altura);
    area=(base*altura)/2;
    printf("a area do triangulo e: %f", area);
    return 0;
}

