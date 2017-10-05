/*1- AV1 - Faça um modulo em C que recebe um vetor com 42 elementos inteiros
e multiplique todos os elementos pelo maior vetor e retorne a soma de 
todos os elementos depois da multiplicação*/
#include <stdio.h>
int soma(int vet[]);
int main()
{
    int total, vet[5];
    total=soma(vet);
    printf("\nO maior numero, multiplicado pela soma é: %d", total);
return 0;
}
int soma(int vet[])
{
    int i, cont=0, maior=0, total=0;
        for(i=0;i<5;i++)
        {
             scanf("%d",&vet[i]);
             cont+=vet[i];
             if(vet[i]>maior)
             {
                 maior=vet[i];
             }
        }
        for(i=0;i<5;i++)
        {
             printf("%d",vet[i]);
        }
    printf("\nA soma dos inteiros é: %d", cont);
    total=maior*cont;
return total;
}