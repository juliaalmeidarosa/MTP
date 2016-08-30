#include<stdio.h>
#include<stdlib.h>//RAND_MAX
#include<time.h>
#include<float.h>
int main()
{
    srand(time(0));
    int i;
    for(i=0;i<10;i++)
        printf("%f\n", (float)rand()/RAND_MAX);
    return 0;
}
