#include<stdio.h>
#include<stdint.h>
#include<time.h>
#define N 10
int main ()
{
    int vetor[N], soma=0, produto=1, i, j;
    printf("digite 10 numeros para preencher o vetor:\n");
    scanf("%d %d %d %d %d %d %d %d %d %d", &vetor[0], &vetor[1], &vetor[2], &vetor[3], &vetor[4], &vetor[5], &vetor[6], &vetor[7], &vetor[8], &vetor[9]);
    for(i=0;i<10;i++)
    {
        soma=soma+vetor[i];
    }
    for(j=0;j<10;j++)
    {
        produto=produto*vetor[j];
    }
    printf("soma eh %d\n", soma);
    printf("produto eh %d\n", produto);
    return 0;
}
