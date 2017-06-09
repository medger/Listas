/*
Devido ao índices alarmantes de acidente com ônibus em etradas brasileiras, fez-se um levantamento do tempo
em que alguns motoristas de determinadas linhas de ônibus fazem em seu trajeto. Para Tanto, verificou-se as quilometragens
iniciais, finais e tempo gasto no trajeto.

Faça um programa que leia o arquivo binário e:\trajeto.bin, ja existente, com as seguintes informações:

Placa do veículo    KM Inicial  KM Final    Tempo gasto no trajeto
(caracter)           (inteiro)  (inteiro)       Em Minutos (Inteiro)

Gere um arquivo, e:\veloc.txt, contendo a placa dos ônibus e a respectiva velocidade média dos veículos que obtivera
a média de velocidade individual superio a 80 km/h. Obs.: Velocidade = Distância/tempo

*/
struct tlista
{
    char placa[7];
    float kmi;
    float kmf;
    float tempo;
};

int main()
{
    int speed, cont;
    struct tlista listaux
    int i;
    
    FILE *arq=fopen("Trajeto.bin", "rb");
    FILE *arq2=fopen("Veloc.txt");
    
    if(arq==NULL || arq2==NULL)
        return 1;
        
    else
    {
        while(!feof(arq))
        {
            fread(&listaux, sizeof(struct tlista),1,arq);
                speed=(listaux.kmf-listaux.kmi)/listaux.tempo;
            
            if(speed>80)
                fprintf(&arq2, "Placa:%d Vel:%f.2f", listaux.placa, speed);
        }
    fclose(arq);
    fclose(arq2);
    }
return 0;
}