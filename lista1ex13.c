/*13. Fazer uma reserva de passagens aéreas de uma companhia. 
Além de leitura do número dos vôos e quantidade de lugares disponíveis, 
ler vários pedidos de reserva, constituídos do 
número da carteira de identidade do cliente e do número do vôo desejado.
Para cada cliente, verificar se há disponibilidade no vôo desejado.
Em caso afirmativo, imprimir o número da identidade do cliente, e o
número do vôo, atualizando o número de lugares disponíveis. Caso
contrário, avisar ao cliente da inexistência de lugares.
Indicando o fim dos pedidos de reserva, existe um passageiro cujo
número da carteira de identidade é 9999. Considerar fixo e igual 37 o
número de vôos da companhia.
 Estrutura de dados necessária:
1- 727      15      --              --
2- 442      16      --              --
3- ...      ..      ..              ..
37- 291     15      --              --
    Nº      Lug     cliente        nºvoo
    voos    disp.   
 */
 
 #include <stdio.h>

struct voos{
	char companhia;
	char origem[50];
	char destino[50];
	int nvoo;
	int LugDisp;
};
const int max=3;

void carregavoos();

int main()
{
	struct voos voo[max];
    int id, numvoo, i;
    
    carregavoos(&voo);
    
    printf("Informe seu Id: ");
    scanf("%d", &id);
    
    while(id!=9999)
    {
      printf("Informe o voo: ");
      scanf("%d", &numvoo);
      int pos=-1;
      for(i=0;i<max;i++)
      {
        if(numvoo==voo[i].nvoo)
        {pos=i;
        break;}}
        if(pos!=-1)
            {if(voo[pos].LugDisp!=0)
                {printf("Reserva feita com sucesso\n");
                printf("Id:%d - Voo:%d", id, numvoo);
                voo[pos].LugDisp--;}
            else
                printf("\n\nVoo lotado");}
                
        else  
            {printf("Voo inexistente");}
        
    printf("\n\nInforme seu Id:");
	scanf("%d", &id);}
    
	
    return 0;}
        
void carregavoos(struct voos *v)
{ int i;
for(i=0;i<max;i++)
    { printf("Informe o numero do voo: ");
      scanf("%d",&v[i].nvoo);
      printf("Informe o numero de lugares: ");
      scanf("%d",&v[i].LugDisp);
      }         
}
    
    
    
