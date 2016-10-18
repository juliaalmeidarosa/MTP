#include<stdio.h>
#define NCHAR 256
void receberdados();
void recuperardados();
int main()
{
	int opcao;
	do{
		printf("1-receber dados\n");
		printf("2-recuperar dados\n");
		printf("0-sair\n");
		printf("Entre com a opcao: ");
		fscanf(stdin, "%d", &opcao); //mesma coisa que scanf
		getchar();//para consumir o ENTER do stdin
		if(opcao==1) receberdados();
		if(opcao==2) recuperardados();
	}while (opcao);
	return 0;
}
void receberdados()
{
	FILE * arquivo;
	char nome[NCHAR];
	int idade;
	float altura_m;
	printf("Entre com seu nome: ");
	fgets(nome, NCHAR, stdin);
	printf("Entre com sua idade: ");
	fscanf(stdin, "%d", &idade);
	printf("Entre com sua altura: ");
	fscanf(stdin, "%f", &altura_m);
	arquivo=fopen("info.txt", "w");
	fprintf(arquivo, "%s\n%d\n%f\n", nome, idade, altura_m);
	fclose(arquivo);
}
void recuperardados()
{
	FILE * arquivo;
	char nome[NCHAR];
	int idade;
	float altura_m;
	arquivo=fopen("info.txt", "r");
	if(arquivo==NULL)
		fprintf(stderr, "Arquivo no existente!\n");
	else
	{
		fgets(nome, NCHAR, arquivo);
		fscanf(arquivo,"%d\n%f\n", &idade, &altura_m);
		fclose(arquivo);
		fprintf(stdout, "Nome: %s\n", nome);
		fprintf(stdout, "Idade: %d\n", idade);
		fprintf(stdout, "Altura: %f\n", altura_m);
	}
}
