#include <stdio.h>
int main()
{
    FILE *notas *resultado;
    
    notas=fopen("NotasProg2.txt","r");
    if(notas==NULL)
        return 1;
        
    else 
    {
        int tam=0, cod; float n1, n2;
        char pos=fscanf(notas, "%d %f %f", &cod,&n1,&n2);
        while(pos!=EOF)
        {
            tam++;
            pos=fscanf(notas, "%d %f %f", &cod,&n1,&n2);
        }
    }
    fclose(notas);
    notas=fopen("NotasProg2.txt","r");
    
    float *matnotas=(float*)malloc(tam*sizeof(float));
    int i=0;
    pos=fscanf(notas, "%d %f %f", &)
}