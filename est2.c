#include<stdio.h>
#include<math.h>
#define SOMA(pta,ptb,soma)\
    ({ soma.x=pta.x+ptb.x;\
       soma.y=pta.y+ptb.y;\
	   soma.z=pta.z+ptb.z; })
       
#define RECEBEPONTO(c, ponto)\
    ({printf("Entre coord x de %c:", c);\
      scanf("%f", &ponto.x);\
      printf("Entre coord y de %c:", c);\
      scanf("%f", &ponto.y);\
      printf("Entre coord z de %c:", c);\
      scanf("%f", &ponto.z); })
      
#define MOSTRAPONTO(ponto)\
	({ printf("( %g; %g; %g)\n", ponto.x, ponto.y, ponto.z); })

#define DISTANCIA(pta, ptb, d) \
	({ d=sqrt(pow(pta.x-ptb.x, 2.f) +\
		  pow(pta.y-ptb.y, 2.f) +\
		  pow(pta.z-ptb.z, 2.f)); })
		
struct ponto
{
    float x;
    float y;
    float z;
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

