/*
Keua yna natruz 7x7 e imprima a soma dos elementos da linha 6. 
Imprima também a soma dos elementos da diagonal principal;
Elemento da linha 3 e 4.
Soma de todos os elementos pares da matriz. Fazer um procedimento para cada uma das funções
*/
#include <stdio.h>

const int tam=7;
void preenchematriz(int matriz[tam][], int tam);
void somalin(int matriz[tam][], int lin, int tam);
void somacol(int matriz[tam][], int col, int tam);
void somadiag(int matriz[tam][], int tam);
void somapar(int matriz[tam][], int tam);
int main()
{
    int matriz[tam][tam];
    
    preenchematriz(matriz,tam);
    somalin(matriz, 5, tam);
    somacol(matriz, 1,tam);
    somadiag(matriz,tam);
    
    printf("%d", matriz[2][3]);
    somapar(matriz,tam);
    
return 0;
}
//1ª função----------------------------------
void preenchematriz(int matriz[tam][], int tam);
{
    int i, d;
    for(i=0;i<tam;i++)
    {
        for(j=0;j=tam;j++)
        {
            printf("Informa o elemento[%d][%d]", i,j);
            scanf("%d",&matriz[i][j]);
        }
    }
}
//2ª função----------------------------------
void somalin(int matriz[tam][], int lin, int tam);
{
    int i, soma=0;
    for(i=0;i<tam;i++)
    {
        soma+=matriz[lin][i];
    }
    printf("%d",soma);
}
//3ª função-----------------------------------
void somacol(int matriz[tam][], int col, int tam);
{
    int i, soma=0;
    for(i=0;i<tam;i++)
    {
        soma+=matriz[i][col];
    }
    printf("%d", soma);
}
//4ª função----------------------------------
void somadiag(int matriz[tam][], int tam);
{
    int i, soma=0;
    for(i=0;i<tam;i++)
    {
        soma+=matriz[i][j];
    }
    printf("%d", soma);
}
//5ª função---------------------------------
void somapar(int matriz[tam][], int tam);
{
    int i, j, soma=0;
    for(i=0;i<tam;i++)
    {
        for(j=0;j<tam;j++)
        {
            if ((matriz[i][j]%2)==0)
            soma+=matriz[i][j];
        }
    }
    printf("%d", soma);
}

