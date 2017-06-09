#include <stdio.h>
struct produto
{
    int cod;
    char nome[50];
    float valor;
    int qtdevend;
};

int main()
{
    struct produto prod;
    struct produto *lstprodutos;
    int cont=0;
    char=aux;
    float maiorvalor=-1;
    int maisvend=-1, posmaiorvalor, posmaisvendido;
    int j=0;
    int i;
    
    //-------------
    //-------------
    FILE *arqProd;
    FILE *arqBin;
    arqProd=fopen("Produtos.txt","r");
        if(ArqProd==NULL)
        {
            return 1;
        }
        else
        {
            aux=fscanf(arqProd,"%d %s %f %d", %prod.cod, prod.nome, &prod.valor, &qtdevend);
            
            while(aux!=EOF)
            {
                printf("Cod:%d Nome:%s Valor:%.2f Qtde:%d", prod.cod, prod.nome, prod.valor, prod.qtdevend);
                cont++;
                aux=fscanf(arqProd,"%d %s %f %d", %prod.cod, prod.nome, &prod.valor, &qtdevend);
            }
        }
    fclose(arqProd);
    
    lstprodutos=(struct produtos*)malloc(cont*sizeof(struct produto));
    //-------------
    //-------------
    arqProd=fopen("Produtos.txt", "r");
    aux=fscanf(ArqProd,"%d %s %f %d", &lstprodutos[j].cod,&lstprodutos[j].nome,&lstprodutos[j].valor, &lstprodutos[j].qtdevend);
    while(aux!=EOF)
    {
        j++
        aux=fscanf(ArqProd,"%d %s %f %d", &lstprodutos[j].cod,&lstprodutos[j].nome,&lstprodutos[j].valor, &lstprodutos[j].qtdevend);
    }
    fclose(ArqProd);
    //-------------
    //-------------
    for(i=0,i<cont;i++)
    {
        if(lstprodutos[i].valor>maiorvalor)
            maiorvalor=lstprodutos[i].valor;
                posmaiorvalor=i;
            
        if(lstprodutos[i].qtdevend>maisvend)
        {
            maisvend=lstprodutos[i].qtdevend
                posmaisvendido=i;
        }
    }
    printf("Nome: %s = %f", lstprodutos[posmaiorvalor].nome, maiorvalor);
    printf("Nome: %s = %d", lstprodutos[posmaisvendido].nome, maisvend);
    
    arqBin=fopen("Produtos.bin", "wb");
    
    fwrite(lstprodutos, cont*sizeof(struct produto), cont, arqBin);
    
    fclose(arqBin);
    
return 0;
}