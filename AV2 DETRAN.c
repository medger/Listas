/*
Certa firma fez uma pesquisa no DETRAN, para isso foi solicitado o 
sexo dos entrevistados e seus pontos obtidos em carteira. Sabendo-se que teremos 
que entrevistas várias pessoas (a qtde deverá ser informada pelo user),
fazer um programa que faça a pesquisa, calcule e escreva;

a) O nº de pessoas que tiveram multa superio a 14 pontos;
b) O Nº de pessoas que não tiveram multas;
c) A porcentagem de pessoas do sexo Feminino teve multa superio a 14 pontos;
*/

struct tlista
{
    char sexo;
    int ponto;
}

void multamais(struct tlista *tickets, int tam);
void semmultas(struct tlista *tickets, int tam);
void multafem(struct tlista *tickets, int tam);

int main()
{
    int tam=0,i;
    struct tlista tickets;
    
    printf("Qnts pessoas foram entrevistadas");
    scanf("%d", &tam);
    
    tickets=(*stuck tlista)malloc(tam*sizeof(struct tlista));
    
    for(i=0;i<tam;i++)
    {
        scanf("%c %d", tickets[i].sexo, tickets[i].ponto);
    }
    
    multamais(tickets,tam);
    semmultas(tickets,tam);
    multafem(tickets, tam);
    
return 0;
}

void multamais(struct tlista *tickets, int tam)
{
    int aux;
    int i;
    
    for(i=0;i<tam;i++)
    {
        if(tickets[i].ponto>4)
            aux++;
    }
    printf("%d pessoas tem multa superior a 14 pontos", aux);
}

void semmultas(struct tlista *tickets, int tam);
{
    int aux;
    int i;
    
    for(i=0;i<tam;i++)
    {
        if(tickets[i].ponto==0)
            aux++;
    }
    printf("%d pessoas que não tem multa.", aux);
}


void multafem(struct tlista *tickets, int tam);
{
    int aux;
    int i;
    
    for(i=0;i<tam;i++)
    {
        if(tickets[i].sexo=="f"||"F" && tickets[i].ponto>14)
            aux++;
    }
    aux=(aux/tam)*100;
    printf("A porcentagem é: %f", aux);
}