#include<stdio.h>
char *inicializatexto();
char *recebetexto(char *texto);
int main ()
{
    char *texto;
    texto=inicializatexto();
    printf("Entre com o seu texto (entre com # mais enter para sair): ");
    texto=recebetexto(texto);
    printf("\n: O que tem na HAP:: \n");
    printf("%s\n", texto);
    free(texto);
    return 0;
}
char *inicializatexto()
{
    char *texto;
    texto=(char*)malloc(sizeof(char));
    texto[0]='\0';
    return texto;
}
char *recebetexto(char *texto)//ou void recebetexto(char **texto)
{
    int c, tamanho=0;
    do{
        c=getchar();
        if(c!='#')
        {
            tamanho++;
            texto=(char*) realloc(texto, (tamanho+1)*sizeof(char));
            texto[tamanho]='\0';
            texto[tamanho-1]=c;
        }
    }while (c!='#');
    return texto;
}
