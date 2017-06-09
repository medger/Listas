/*2- Carregue um vetor de números reais com 80 posições e desenvolva um programa para encontrar o maior e o menor valor. 
Após isto, o programa deverá trocar o maior valor com o da primeira posição e o menor valor com o da última posição*/

#include <stdio.h>
int maior(int *vet);
int menor(int *vet);
int inverte(int *vet);

const int tam=5;
int posup;
int posdown;
int aux;

//-----
int main()
{
    int numreais[tam];
    int i;
    
    for(i=0;i<tam;i++)
    {
        printf("Digite o %dº de 5 números\n", i+1);
        scanf("%d", &numreais[i]);
    }
    
    printf("Os números que você digitou foram:\n");
    
    for(i=0;i<tam;i++)
    {
        printf("%d, ", numreais[i]);
    }
    
    maior(numreais);
    menor(numreais);
    inverte(numreais);
    
    printf("\nOs números que você digitou, com o primeiro e o último número invertido foram:\n");
    for(i=0;i<tam;i++)
    {
        printf("%d, ", numreais[i]);
    }
return 0;
}
//-----
int maior(int *vet)
{
    int maior, i;
    for(i=0;i<tam;i++)
    {
        if(vet[i]>maior)
        maior=vet[i];
        posup=i;
    }
    printf("\nO maior valor é %d\n", vet[posup]);
return 0;
}

//-----
int menor(int *vet)
{
    int menor=9999, i;
    for(i=0;i<tam;i++)
    {
        if(vet[i]<menor)
        menor=vet[i];
        posdown=i;
    }
     printf("O menor valor é %d\n", vet[posdown]);
return 0;
}


int inverte(int *vet)
{
    aux=vet[0];
    vet[0]=vet[posup];
    vet[posup]=aux;
    
    aux=vet[tam-1];
    vet[tam-1]=vet[posdown];
    vet[posdown]=aux;
}
