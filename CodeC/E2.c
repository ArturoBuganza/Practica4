#include <stdio.h> 
  

int main()
{
   unsigned int a;
   unsigned int b;
   
   int division;
   int multiplicacion;
   
   a=60;
   b=4;
   
   if (b <= 2) {
       multiplicacion = a<<(b-1);
       division= a>>(b-1);
   } 
   else if (b <= 3){
       multiplicacion = (a<<1) + a;
       division= (a>>2)+5;
   }
   else if (b <= 4){
       multiplicacion = (a<<2);
       division= (a>>2) ;
   }
   else if (b <= 5){
       multiplicacion = (a<<2) + a;
       division= (a>>2) - 3;
   }
   printf( "%d ", division);
   printf( "%d ", multiplicacion);
   
   return 0;
}