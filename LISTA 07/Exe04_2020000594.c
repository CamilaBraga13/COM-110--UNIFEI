#include <stdio.h>



#define lin 5

#define col 7



int main(){



    int a[lin][col];

    int menor[lin], maior[col]; 
    int existesela;



    //Reecebe linha por linha

    for (int i = 0; i < lin; i++) {

        //De coluna em coluna

        for (int j = 0; j < col; j++) {

            printf("A [%d][%d]: ", i+1, j+1);

            scanf("%d", &a[i][j]);

        }

    }

    printf("\n");



    printf("A: \n");
    
    //Deixa no formato de matriz
    for (int i = 0; i < lin; i++) {

        

        for (int j = 0; j < col; j++) {

            printf(" %d", a[i][j]);

        }

        printf("\n");

    }

    printf("\n");



    //Encontra o menor elemento de cada linha

    for (int i = 0; i < lin; i++) {   

        //Define o primeiro elemento como menor 
     menor[i] = a[i][0]; 



        for (int j = 0; j < col; j++) {

            if(a[i][j] < menor[i]) {

             menor[i] = a[i][j];

            }

        }   

    }



    //Acha o maior valor de cada coluna

    for (int i = 0; i < col; i++) {   

       
        //Define o primeiro elemento de cada coluna como maior 
        //Depois testa esse elemento na sequencia
        maior[i] = a[0][i]; 



        for (int j = 0; j < lin; j++) {

            if(a[j][i] > maior[i]) {

                maior[i] = a[j][i];

            }

        }   

    }

    

    
    //Compara os elementos,maior e menor para saber se sao os mesmos
    //Para saber se sao ao mesmo tempo o menor a linha e o maior da coluna
     

    

    for(int i = 0; i < lin; i++) {



        for(int j = 0; j < col; j++) {

            if(maior[j] == menor[i]) {

                printf("---> sela = %d \nPosicao A: [%d][%d]\n", menor[i], i+1, j+1);

                existesela = 1;

            } 

        }

    }

    if(existesela != 1) {

        printf("-- Sela não existe!\n");

    }



    return 0;

}