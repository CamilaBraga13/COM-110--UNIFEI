#include <stdio.h>

void main (){

  int a,b,i;

  printf("\nDigite um número inteiro: ");
  scanf("%d",&a);
  printf("\nDigite outro número inteiro: ");
  scanf("%d",&b);

   if(a==b || (a-b)==1 || (b-a)==1){
 	printf("\n NÃO EXISTEM NÚMEROS INTEIROS ENTRE %d E %d ",a,b);
	}

if(a<b){
  for(i=a+1 ; i<b ; i++){
	printf("\n%d",i);

   }
  }
   if (b<a){
   for(i=b+1 ; i<a ; i++){
 	printf("\n%d",i);
	}
  }

 



}

