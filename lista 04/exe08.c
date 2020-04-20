#include <stdio.h>

void main (){
  
  float hora;
  do{
  
  printf("\nDigite a hora atual: ");
   scanf("%f",&hora);

 


	if(hora>=5&&hora<12){
  	printf("\nMANHÃ");
	}
 	if(hora>=12&&hora<18){
  	printf("\nTARDE");
	}
 	if(((hora>=18) && (hora<24) )|| (( hora>=0 ) && (hora<5))){
  	printf("\nNOITE");
	}
	



	if(hora<0 || hora>24){
  	printf("\nDIGITE UMA HORA VÁLIDA(MAIOR QUE 0 E MENOR QUE 23\n");
	}
  }while(hora<0 || hora>24);

}

