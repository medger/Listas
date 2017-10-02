/*7. Faça uma função que receba um valor inteiro e positivo, calcule e
retorne o seu fatorial. Construa um programa que utilize essa função. */
#include <stdio.h>
int fatorial(int num);
int main()
{
    int num=0, aux=0;
    printf("Entre com um numero inteiro: ");
    scanf("%d",&num);
    
    aux=fatorial(num);
    
    printf("O valor fatorial de %d é: %d",num,aux);
return 0;    
}

int fatorial(int num)
{
    int fat=1;
    while(num>0)
    {
        fat=fat*num;
        num=num-1;
    }
return fat;
}