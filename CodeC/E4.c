#include <stdio.h>
#include <math.h>

   int contador;
   int numero;
   int real;
   int contador;
   int n;

void D2B(int contador, int n)
{
    int j;
    for(int i = n- 1 ; i >= 0; i--)
    {
        j = contador >> i;
        
        if(j & 1)
            printf("1");
        else
            printf("0");
    }
    printf(" ");
}
int main() 
{
   int contador = 0; 
   int n= 3;
   numero = pow(2,n) - 1;
   while ( contador <= numero )    
   {
      n = n ; 
      D2B(contador, n); 
      contador++;  
   }

    return 0;
}