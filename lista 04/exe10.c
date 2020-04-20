#include <stdio.h>
#include <math.h>
void main(){
  float velcar,velmax,vint,cinq;
do{
  printf("\nDigite a velocidade em que estava o veículo: ");
  scanf("%f",&velcar);
  if(velcar<=0){
	printf("\n DIGITE UM NÚMERO VÁLIDO!");
  }
}while(velcar<=0);

do{
  printf("\nDigite a velocidade max da via: ");
  scanf("%f",&velmax);
  if(velmax<=0){
	printf("\nDIGITE UM VALOR VÁLIDO PARA VELOCIDADE");
  }
}while(velmax<=0);
  vint = velmax * 1.2;
  cinq = velmax * 1.5;
  if(velcar<=velmax){
	printf("\nNão houve multa");
  }else if(velcar>velmax && velcar<=vint){
  	printf("\nSua multa é de: R$ 85,13");
	}else if (velcar>vint && velcar<=cinq){
  	printf("\nSua multa é de: R$ 127,69");
   }else if(velcar>cinq){
   	printf("\nSua multa é de  R$ 574,62 ");
  	}
}

