#include <stdio.h>

void main (){
  
  float n1,n2,soma,sub,mult,div;
  printf("\nDigite um número: ");
  scanf("%f",&n1);
  printf("\nDigite outro número: ");
  scanf("%f",&n2);

  soma=n1+n2;
  sub=n1-n2;
  mult=n1*n2;
  div=n1/n2;

  printf("\nO resultado da soma é %.2f",soma);
  printf("\nO resultado da subtracão é %.2f",sub);
  printf("\nO resultado da multiplicação é %.2f",mult);

if(n2==0){
  printf("\nDivisao inexistente!");
}else {
  printf("\nO resultado da divisão é : %.2f",div);
}
 
 
}

