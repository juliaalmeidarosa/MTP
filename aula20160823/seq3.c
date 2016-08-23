#include<stdio.h>
int main()
{
    float A, B, C, media;
    printf("digite a primeira nota do aluno");
    scanf("%f",&A);
    printf("digite a segunda nota do aluno");
    scanf("%f",&B);
    printf("digite a terceira nota do aluno");
    scanf("%f",&C);
    media=(2*A+3*B+5*C)/10;
    printf("a media do aluno e: %f", media);
    return 0;
}
