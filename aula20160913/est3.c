#include<stdio.h>
#include<math.h>

#define cadastro N
	  
int main ()
{
    struct cadastro {char nome[100]; int idade; int telefone} vet[N];
    int N;
	printf("Declare quantos cadastros serao feitos: %d", N);
	scanf("%d", &N);
	
	
	{
	  printf("Entre com o nome do cadastro: %s", nome);
	  scanf("%s", &nome.j);
	  printf("Entre com a idade do cadastro: %d", idade);
	  scanf("%s", &idade.j);
	  printf("Entre com o telefone do cadastro: %d", telefone);
	  scanf("%s", &telefone.j);
	}
    INFORMACAO(nome, idade, telefone);
    return 0;
}
