/*3. Faça uma função que receba três notas de um aluno com parâmetros e
uma letra. Se a letra for A o procedimento calcula a média das notas do
aluno, se for P o procedimento calcula a média ponderada com pesos 5,3 e
2. A média calculada deve ser devolvida ao programa principal para,
então ser mostrada. */
#include <stdio.h>
float media(float av1, float av2, float av3, char letra);

int main()
{
    float av1, av2, av3, m;
    char tipo;
    printf("Entre com as notas do aluno:\n");
    printf("AV1: ");scanf("%f", &av1);
    printf("AV2: ");scanf("%f", &av2);
    printf("AV3: ");scanf("%f", &av3);
    
    printf("Digite 'A' para media ARITIMETICA ou 'P' para media PONDERADA:\n");
    scanf(" %c", &tipo);
    
    m=media(av1,av2,av3,tipo);
    printf("A media é:%f\n", m);
    
return 0;
}

float media(float av1, float av2, float av3, char letra)
{
    int M=0;
    
    if(letra=='A'||letra=='a')
        M=(av1+av2+av3)/3;
    else
        if(letra=='P'||letra=='p')
        	M=(av1*5+av2*3+av3*2)/10;
        else
            M=-1;
return M;
}