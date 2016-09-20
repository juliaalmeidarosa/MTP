#include<stdio.h>

int main()
{
    int decisao;
    printf("Se deseja ver os impares digite 1, se deseja ver os pares digite 0\n");
    scanf("%d", &decisao);
    system("cls");
    if (decisao==1)
        mostrar_impar();
    else
        mostrar_par();
    return 0;
}
int mostrar_impar ()
{
    int i;
    for(i=1; i<=10; i++)
    {
        if(i%2!=0)
            printf("%d\n",i);
    }
}
int mostrar_par()
{
    int j;
    for(j=1; j<=10; j++)
    {
        if(j%2==0)
            printf("%d\n",j);
    }
}
