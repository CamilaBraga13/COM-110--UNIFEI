// 2-Crie um programa que preencha uma matriz 8×8 com números inteiros e mostre uma mensagem dizendo se a matriz digitada é simétrica. Uma matriz só pode ser considerada simétrica se A[i,j] = A[j,i].

#include <stdio.h>
#include <stdlib.h>

#define tam 8

int main() {
  
  int x[tam][tam],i,j,m=0,sim=0;
 
 //Pede ao usuario que digite os valores da matriz
  for(i=0 ; i<tam ; i++){
      for(j=0 ; j<tam ; j++){
          printf("\nDigite X[%d][%d] = ",i+1,j+1);
          scanf("%d",&x[i][j]);
      }
  }

    //Printa a matriz em seu formato usual
     printf("\nX:\n");
   for(i=0;i<tam;i++){
      for(j=0;j<tam;j++){
        printf("%d\t",x[i][j]);
        }
        printf("\n");
      }

 


  //Printa a matriz transposta em seu formato usual 
  printf("\nX(Transposta):\n");

   for(i=0;i<tam;i++){
      for(j=0;j<tam;j++){
        printf("%d\t",x[j][i]);
        }
        printf("\n");
    }

    for(i=0;i<tam;i++){
      for(j=0;j<tam;j++){

          if(x[i][j]==x[j][i]){
              sim=sim+1;
          }
        
        }
    }

    if(sim==(tam*tam)){
        goto simetrica;
    }else{
    
        goto assimetrica;
    }



    simetrica:

    printf("\nA matriz digitada e simetrica!!\n");
		goto fim;

    assimetrica:

    printf("\nA matriz digitada e assimetrica!!\n");
  

		fim:

  return 0;
}