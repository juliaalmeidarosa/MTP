#include<stdio.h>
#define NCHAR 256
void receberdados();
int main()
{
	receberdados();
	return 0;
}
void receberdados()
{
	FILE * arquivo;
	char nome[NCHAR];
	int dados[10000];
	int n, i;
	printf("Entre com o nome do arquivo: ");
	scanf("%s", nome);
	printf("Entre com o numero de dados que voce quer entrar");
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		printf("Entre com um dado aleatorio: ");
		scanf("%d", &dados[i]);
	}
	arquivo=fopen(nome, "w");
	if(arquivo == NULL)
		fprintf(stderr, "Nao existe arquivo!");
	else{
	for(i=0; i<n; i++)
		fprintf(arquivo, "%d\n", dados[i]);
	fclose(arquivo);
	}
}

