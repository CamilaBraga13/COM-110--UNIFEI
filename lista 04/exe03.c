#include <stdio.h>
    #include <math.h>

void main (){

  float opcao;



  do{

  printf("\nDigite sua opcao: ");
  scanf("%f",&opcao);
 

  }while(opcao!=1 && opcao!=2 && opcao!=3);

  printf("\nSua opção foi: %.f",opcao);
}

