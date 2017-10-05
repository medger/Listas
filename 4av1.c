/*4-Calcule e escreva o CR do semestre para 
os alunos. Existem 100 alunos e para cada um deles
o programa deverá ler o número da matrícula, 
a quantidade de disciplinas cursadas e as notas 
de cada disciplina.
Além do CR de cada aluno, o código deverá escrever 
o maior CR e a matrícula do aluno (que obteve o maior CR)*/
#include <stdio.h>
int main()
{
    int i=0, j=0, mat[100], disc=0;
    int nota=0, aux=0, cr=0, crmaior=-1, matmaior=-1;
    do
    {   printf("\nDigite a matricula: ");
        scanf("%d", &mat[j]);
        printf("Quantas disciplinas está cursando? ");
        scanf("%d", &disc);
        
        for(i=0;i<disc;i++)
        {
            printf("Nota: ");
            scanf("%d", &nota);
            aux+=nota;
        }
        cr=aux/disc;
        printf("CR: %d", cr);
        
        if(cr>crmaior)
        {
            crmaior=cr;
            matmaior=j;
        }
    }while(j<100);
        
        printf("O maior CR é do: %d", matmaior);
        printf("CR: %d", crmaior);
return 0;
}