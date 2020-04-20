#include <stdio.h>

void main (){
  int n,mai,men;

  printf("\nDigite um número (somente inteiros): ");
  scanf("%d",&n);
  mai=n;
  men=n;
 
  if(n>=0){
   do{
  	if(n>mai){
    	mai=n;
  	}
  	if(n<men){
    	men=n;
  	}
        	
  	printf("\nDigite outro número número: ");
  	scanf("%d",&n);	

	}while(n>=0);

	printf("\nMAIOR: %d",mai);
	printf("\nMENOR: %d",men);

  }





}
