/*2. Faça uma função que transforme e mostre segundos em horas, minutos e
segundos.  */
#include <stdio.h>

void converte(int seg);

int main()
{
    int seg=0;
    printf("\nConversor de hora para minuto, e minuto para segundo");
    printf("\nDigite um númeroem segundos\n");
    scanf("%d", &seg);
    
    converte(seg);
return 0;
}

void converte(int seg)
{
    int h=seg/3600;
    int m=(seg%3600)/60;
    int s=(seg%3600)%60;
    
    printf("%dH %dM %dS", h,m,s);
}
