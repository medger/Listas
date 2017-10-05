#include<stdio.h>
#include<stdlib.h>
void proc2006(int *alfa, bool*beta)
{
    *alfa=1900;
    *beta=true;
}
int main()
{
    int NR, saida;
    bool VF;
    
    NR=2000;
    VF=false;
    proc20016(&NR,&VF);
    if(VF)
        saida=2007;
    else
        saida=2008;
        
    printf("\n%d %d %d\n", NR, VF, saida);
    
return 0;
}