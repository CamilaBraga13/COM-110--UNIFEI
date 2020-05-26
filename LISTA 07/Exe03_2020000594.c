//3- Na teoria dos sistemas, define-se o elemento MINMAX de uma matriz como o maior elemento da linha em que se encontra o menor elemento da matriz. Elabore um programa que carregue uma matriz 4×7 com números reais, calcule e mostre seu MINMAX e sua posição (linha e coluna).


#include <stdio.h>
#include <stdlib.h>

#define lin 3
#define col 3

int main() {
  
  int i,j,linha;
  float x[lin][col],menor,minmax;

//Recebe os valores do usuario
  for(i=0 ; i<lin ; i++){
      for(j=0 ; j<col ; j++){
          printf("\nDigite X[%d][%d]= ",i+1,j+1);
          scanf("%f",&x[i][j]);

          if(i==0 && j==0){
              menor=x[i][j];
          }
        if(x[i][j]<menor){//define o menor valor e sua linha
            menor=x[i][j];
            linha=i;//linha do menor valor
            
        }
      }
  }

  //Verifica na linha do menor valor qual e seu maior valor->MINMAX
  for ( j =0 ; j<col ; j++){
      if(j==0){
          minmax=x[linha][j];
      }
      if(x[linha][j]>minmax){
          minmax=x[linha][j];
      }
  }

 printf("\n\n");

  for(i=0;i<lin;i++){
      for(j=0;j<col;j++){
        printf("%.f\t",x[i][j]);
        }
        printf("\n");
    }

    
printf("\nMenor %.f: ",menor);
  printf("\nLinha %d: ",linha+1);



 printf("\n\n");
 printf("\nMINMAX: %.f ", minmax);

  return 0;
}