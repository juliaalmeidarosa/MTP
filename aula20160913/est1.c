#include<stdio.h>
#include<math.h>
#define SOMA(pta,ptb,soma)\
    ({ soma.x=pta.x+ptb.x;\
       soma.y=pta.y+ptb.y; })
       
#define RECEBEPONTO(c, ponto)\
    ({printf("Entre coord x de %c:", c);\
      scanf("%f", &ponto.x);\
      printf("Entre coord y de %c:", c);\
      scanf("%f", &ponto.y); })
      
#define MOSTRAPONTO(ponto)\
	({ printf("( %g; %g)\n", ponto.x, ponto.y); })

#define DISTANCIA(pta, ptb, d) \
	({ d=sqrt(pow(pta.x-ptb.x, 2.f) +\
		  pow(pta.y-ptb.y, 2.f)); })

struct ponto
{
    float x;
    float y;
    };

int main ()
{
    struct ponto A, B, S;
    float distancia;
    RECEBEPONTO('A', A);
    RECEBEPONTO('B', B);
    SOMA(A,B,S);
    MOSTRAPONTO(S);
    DISTANCIA(A,B,distancia);
    printf("A distancia entre eles: %g", distancia);
    return 0;
}
