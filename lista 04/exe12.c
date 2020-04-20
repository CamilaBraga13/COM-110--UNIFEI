#include <stdio.h>

void main (){

  int n=1,b=20;

  while(n>=1 && n<=20){
  printf("\n%.d",n);
   n=n+1;
  }

  printf("\n");

while(b<=20 && b>=1){
   printf("\n%d",b);
   b=b-1;
  }
printf("\n");
n=1; // Restaurei o valor de n para 1 pois no final das equações anteriores n estava com o valor de 20
  
  while(n>=1 && n<=20){
  
   if((n % 2) != 0){
  printf("\n%d",n);
   }
  
   n=n+1;
  } 
}

