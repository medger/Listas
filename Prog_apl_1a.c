#include <stdio.h>

void ABC(float, float, float*);

void main()
{
    float x=2.0, y=3.0, max;
    ABC(x, y, &max);
    ABC(x, max, &y);
    
    printf("%.2f\n%.2f\n%.2f\n",x,y,max);
}

void ABC (float A, float B, float *max)
{
    if (A>B){
        *max=A;
        
    }
    
    if(*max<=A){
        B=*max+A;
        printf("teste 2\n");
    }
    else{
        *max=B;
        printf("teste 3\n");
    }
*max/=B;
}
