#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define N 256
int main ()
{
    int i=0;
    char frase[N];
    printf("entre com uma frase:");
    gets(frase);
    for(i=0; frase[i]!='\0'; i++)
    {
        frase[i]=toupper(frase[i]);
    }
    printf("\n tamanho: %u\n", strlen(frase));



    if (strncmp(frase, "BOM DIA", 7)==0)
        printf("\nBom dia pra vc tbm.\n");
    else
        printf("\nvoce quis dizer: %s?", frase);
    return 0;
}
