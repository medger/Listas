/*2- Dadas as temperaturas que foram registradas diariamente durante uma semana,
deseja-se determinar em quantos dias dessa semana a temperatura esteve acima da média.
A solução para esse problema envolve:

a) Obter os valores das temperaturas para um vetor;
b) Calcular a média desses valores;
c) Verificar quantos deles estão acima da média.
-------Utilizar função para calcular a média-------*/
#include<stdio.h>
float media(float temp[], int tam);
int main()
{
    int  i=0;
    float temp[3], med, qtd=0;    
    for(i=0;i<3;i++)
    {
        scanf("%f", &temp[i]);
    }    
    med=media(temp,3);//chama a função para calcular média das temperaturas    
    for(i=0;i<3;i++)
    {
        if(temp[i]>med)
        {
            qtd++; //diz quantos dias estão acima da média
        }
    }
    printf("A media da temperatura eh: %f\n", med);
    printf("Dias acima da temperatura media: %f\n", qtd);
return 0;
}

float media(float temp[], int tam)
{
    int i;
    float m=0, cont=0;
    for(i=0;i<tam;i++)
    {
        cont+=temp[i];
	}
	m=cont/tam;
return m;
}