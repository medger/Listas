/*5. Escreva uma função potenciaInt(base, expoente) que retorne o valor
de baseexpoente. Não use nenhuma das funções da biblioteca matemática.*/
#include <stdio.h>
int potenciaint(int base, int expo);
int main()
{
    int base, expo, result;
    
    printf("Digite um numero BASE: ");
    scanf("%d",&base);
    printf("Digite um número EXPOENTE: ");
    scanf("%d", &expo);
    
    result=potenciaint(base, expo);
    
    printf("%d", result);
    
return 0;
}

int potenciaint(int base, int expo)
{
    int i;
    int result=0;
    if (expo==0)
    {
        base=1;
    }
    if(expo==1)
    {
        base=base;
    }
    else
    {
        result=base*base;
        for(i=2;i<expo;i++)
        {
            result=result*base; 
        }
    }
return result;
}