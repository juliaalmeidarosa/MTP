#include <stdio.h>
#define N 2
#define M 4
void recebermatriz(float matriz[N][M]);
void imprimematriz(float matriz[N][M]);
void transpormatriz(float matriz[N][M], float transposta [M][N]);
void imprimetransposta(float transposta[M][N]);
int main ()
{
    float matriz[N][M], transposta [M][N];
    recebermatriz(matriz);
    imprimematriz(matriz);
	transpormatriz(matriz,transposta);
	printf("A transposta e:\n");
	imprimetransposta(transposta);
	system("PAUSE");
    return 0;
}
void recebermatriz (float matriz[N][M])//ponteiro que aponta para ponteiros
{
    int i, j;
    for(i=0; i<N; i++)
        for(j=0; j<M; j++) {
            printf("Entre com elemento (%d,%d):",i,j);
            scanf("%f", &matriz[i][j]);
        }
}
void imprimematriz(float matriz[N][M])
{
    int i,j;
    printf("\nMatriz %dx%d:\n", N,M);
    for(i=0; i<N; i++)
        for(j=0; j<M; j++)
            printf ("%g%c", matriz[i][j], (j!=M-1)? '\t': '\n');
}
void transpormatriz (float matriz[N][M], float transposta[M][N])
{
	int i, j;
	for(i=0; i<N; i++)
		for(j=0; j<M; j++)
			transposta[j][i]=matriz[i][j];
}
void imprimetransposta (float transposta [M][N])
{
	int i,j;
    printf("\nMatriz %dx%d:\n", M,N);
    for(i=0; i<M; i++)
        for(j=0; j<N; j++)
            printf ("%g%c", transposta[i][j], (j!=N-1)? '\t': '\n');
}
