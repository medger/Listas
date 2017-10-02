/*1. Faça uma função que receba dois números positivos por parâmetro e
retorne a soma dos N números inteiros existentes entre eles. */
#include <stdio.h>
int soma();

int main()
{
    int resp;
    printf("Digite dois numeros inteiros:");
    
    resp=soma();
    
    printf("Total: %d",resp);
    
return 0;
}

int soma()
{
    int i, A, B, total=0;
    scanf("%d %d",&A,&B);
    if (A>=B)
        printf("intervalo inválido");
    else
    {
        for(i=A+1;i<B;i++)
            total=total+i;
    }
return total;
}