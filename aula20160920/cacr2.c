#include<stdio.h>
int  main ()
{
    float a, b, c, raiz1, raiz2;
    printf("Digite os coeficientes lineares da equacao:");
    scanf("%f %f %f", &a, &b, &c);
    delta(a,b,c);
    if (delta>0)
    {
        delta_maior(a,b,c,delta);
        printf("\nRaizes sao: %f %f", raiz1, raiz2);
    }
    if (delta==0)
    {
        delta_igual(a,b,c,delta);
        printf("\nRaizes sao: %f %f", raiz1, raiz2);
    }
    if (delta<0)
        printf("\nNao existe raizes reais!");
    return 0;
}
int delta (int a, int b, int c)
{
    int delta;
    delta=b*b-4*a*c;
    return delta;
}
int delta_maior (int a, int b, int c, int delta)
{
    int raiz1, raiz2;
    raiz1=(-b + sqrt(delta))/(2*a);
    raiz2 = (-b - sqrt(delta))/(2*a);
    return raiz1, raiz2;
}
int delta_igual (int a, int b, int c, int delta)
{
    int raiz1, raiz2;
    raiz1 = -b/(2*a);
    raiz2=raiz1;
    return raiz1, raiz2;
}
