#include<stdio.h>
#include<ctype.h>
int main ()
{
    int indice=0; //primeiro caractere da string
    char investigador;
    char frase[256];
    printf("escreva uma frase:");
    gets(frase);
    investigador=frase[indice];
    while(investigador!='\0') //'\0'=NULL termina a frase
    {
     frase[indice]=tolower(investigador);
     indice++;
     investigador=frase[indice];
    }
    printf("%s\n",frase);
    return 0;
}
