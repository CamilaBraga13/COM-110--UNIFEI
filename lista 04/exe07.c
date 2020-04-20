#include <stdio.h>
	
void main (){
  
  float altura,peso,imc;

  do{
  printf("\nDigite sua altura (em metros): ");
  scanf("%f",&altura);
  if(altura<=0){
	printf("Digite uma altura maior que 0");
  }
  } while(altura<=0);

  do{
  printf("\nDigite seu peso: ");
  scanf("%f",&peso);
  if(peso<=0){
	printf("\nDigite um peso maior que 0");
  }
  }while(peso<=0);

  imc=(peso)/(altura*altura);
  printf("\n Seu IMC é %.2f",imc);

}
