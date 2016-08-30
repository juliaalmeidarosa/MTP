#include<stdio.h>
#include<complex.h>
int main ()
{
    double complex z1, z2, soma;
    double r_z1, i_z1,r_z2, i_z2;
    printf("real de z1: ");
    scanf("%lf", &r_z1);
    printf("imaginario de z1: ");
    scanf("%lf", &i_z1);
    printf("real de z2: ");
    scanf("%lf", &r_z2);
    printf("imaginario de z2: ");
    scanf("%lf", &i_z2);
    z1=r_z1+i_z1*I;
    z2=r_z2+i_z2*I;
    soma=z1+z2;
    printf("soma:%lf+%lfi\n",creal(soma),cimag(soma));
    printf("produto: %lf+%lf*i\n", creal(z1/z2), cimag(z1/z2));
    return 0;
}
