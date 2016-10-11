#include <stdio.h>
#include<math.h>
#include<stdlib.h>
float *recebenumero(float *numero, int *tamanho);
void media(float *numero, int *tamanho);
float menor (float *numero, int *tamanho);
float maior (float *numero, int *tamanho);
int main ()
{
    float *numero;
    int tamanho=0, i, n;
    numero=(float *) malloc(sizeof(float));
    do
    {
        printf("\nCaso deseje sair digite 0, para entrar no programa digite qualquer numero:");
        scanf("%d", &n);
        if(n!=0)
        {
          numero=recebenumero(numero, &tamanho);
          media(numero, &tamanho);
          menor(numero, &tamanho);
          maior(numero, &tamanho);
        }
    }while (n!=0);
    free(numero);
	return 0;
}
float *recebenumero(float *numero, int *tamanho)
{
    float n;
    printf("Entre com o numero");
    scanf("%f", &n);
    (*tamanho)++;
    numero=(float*) realloc(numero, (*tamanho+1)*sizeof(float));
    numero[*tamanho-1]=n;
    return numero;
}
void media(float *numero, int *tamanho)
{
	float soma=0.f;
	int i;
	for(i=0; i<*tamanho; i++)
		soma+=numero[i];
	printf("media e: %g", soma/ *tamanho);
}
float menor (float *numero, int *tamanho)
{
    int i;
    float menor=numero[0];
    for(i=0; i<*tamanho; i++)
        if(menor>numero[i])
        menor=numero[i];
    printf("\n o menor e:%g", menor);
}
float maior (float *numero, int *tamanho)
{
    int i;
    float maior=numero[0];
    for(i=0; i> *tamanho; i++)
        if(maior<numero[i])
        maior=numero[i];
    printf("\n o maior e:%g", maior);
}
