#include <stdio.h>
 
 void main(){

   int lin=6,col=22,i,j;
    //linhas 0-6 (7 linhas)
    //colunas 0-22 (23 colunas)
    // i->contador linhas
    // j->contador colunas

   for(i=0 ; i<=lin ; i++){

     for(j=0 ; j<=col ; j++){
       
       if (i==0 || i==lin || j==0 || j==col && i != 3 && j != 4) {
         printf("#");

        } else if(i==3 && j==4){
           printf("SEJA BEM-VINDO");
        } else if (i==3 && j==col-13){ //-13 pois quando escrevemos dentro do quadrado ele adiciona caracteres novos empurrando a ultima # da linha para frente, sendo necessario subtrair a quantidade de caracteres.
        
          printf("#");
        } else  {
         printf(" ");
        }
     }
     printf("\n");
    }
 }
