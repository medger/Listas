/*6. Elabore uma função que receba 2 números inteiros a e b e um caracter
c. A função deve imprimir uma "moldura" de tamanho a x b, feita usando
um caracter c e devolver o número de caracteres impressos. O programa
deve executar a função e imprimir seu valor de retorno. */
#include <stdio.h>
int moldura(int a, int b, char c);
int main()
{
    int a, b, mold;
    char c;
    printf("Digite DOIS numeros inteiros e UM caracter: ");
    scanf("\n%d\n%d\n%c", &a, &b, &c);
    mold=moldura(a, b, c);
    printf("%d\n\n", mold);
return 0;
}
int moldura(int a, int b, char c)
{
    int i, j, cont=0;
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=b;j++)
        {
            if (i==1||i==a)
            {
            printf("%c",c);
            cont++;  
            }
            else
            {
                if(j==1||j==b)
                {
                    printf("%c",c);
                    cont++;
                }
                else
                {
                    printf(" ");
                }
            }
        }
    printf("\n");
    }
return cont;
}