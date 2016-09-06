#include<stdio.h>
int main()
{
    unsigned int num=0xFACA8421;
    unsigned char *ponteiro=NULL;
    printf("%p:%u\n", &num, num);
    ponteiro= (unsigned char*)&num;
    printf("%p: %x\n", ponteiro, *ponteiro);
    printf("%p: %x\n", ponteiro+1, *ponteiro+1);
    printf("%p: %x\n", ponteiro+2, *ponteiro+2);
    printf("%p: %x\n", ponteiro+3, *ponteiro+3);
    return 0;
}
