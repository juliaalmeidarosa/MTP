#include<stdio.h>
#include<ctype.h>
int main()
{
    int indice=0;
    char investigador;
    char frase[300];
    printf("escreva uma frase");
    gets(frase);
    investigador=frase[indice];
    while (investigador !='\0')
    {
        frase[indice]=toupper(investigador);
        indice++;
        investigador=frase[indice];
    }
    printf("%s\n", frase);
    return 0;
}
