#include<stdio.h>
#include<stdint.h>
#include<time.h>
#define N 10
int main ()
{
    int vetor[N],aux, i, j=9;
    printf("digite 10 numeros para preencher o vetor:\n");
    scanf("%d %d %d %d %d %d %d %d %d %d", &vetor[0], &vetor[1], &vetor[2], &vetor[3], &vetor[4], &vetor[5], &vetor[6], &vetor[7], &vetor[8], &vetor[9]);
    for(i=0;i<6;i++)
    {
        aux=vetor[i];
        vetor[i]=vetor[j];
        vetor[j]=aux;
        j--;
    }
    for(i=0;i<10;i++)
        printf("%d\n", vetor[i]);
    return 0;
}
