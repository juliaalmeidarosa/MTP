#include<stdio.h>
#include<ctype.h>
int main()
{
    int indice=0, letras=0;
    char investigador;
    char frase[300];
    printf("escreva uma frase: ");
    gets(frase);
    investigador=frase[indice];
    while (investigador!='\0')
    {
        if(isalpha(investigador)!=0)
        {
            letras++;
        }
        indice++;
        investigador=frase[indice];
    }
    printf("%d\n", letras);
    return 0;
}
