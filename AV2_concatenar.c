#include <stdio.h>
#include <string.h>
int main()
{
    char str1[50], str2[50], str3[100];
    int i,j=0, tam1, tam2;
    
    printf("Digite a 1ª palavra\n");
    scanf("%s",str1);
    printf("Digite a 2ª palavra\n");
    scanf("%s",str2);
    
        tam1=strlen(str1);
        tam2=strlen(str2);
        
    for(i=0;i<tam1;i++)
    {
        str3[i]=str1[i];
    }
    
    for(i=tam1;i<tam1+tam2;i++,j++)
    {
        str3[i]=str2[j];
    }
    
    printf("\n%s", str3);
return 0;
}