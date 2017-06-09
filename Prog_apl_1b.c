#include <stdio.h>
void main()
{
    int a=1, b=6;
    void FUNCAO(int *, int *);
    FUNCAO(&a,&b);
    
    if((a))
        printf("%.1f\n", (float) a+b);
    else
        printf("Erro\n");
    if((!b))
        printf("%.1f\n", (float) a/b);
    else
        printf("Erro\n");
    puts("FIM");
}

void FUNCAO (int *num1, int *num2)
{
    int a=1, b=6;
    *num1 = 10;
    *num2 = 4;
}