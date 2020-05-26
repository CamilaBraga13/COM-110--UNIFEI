#include <stdio.h>
#include <stdlib.h>

int main() {
    int x[2][2],y[2][2],i,j,maior=0;

    for(i=0 ; i<2 ; i++){
        for(j=0 ; j<2 ; j++){
            printf("\nDigite X[%d][%d]= ",i,j);
            scanf("%d",&x[i][j]);

			if(i == 0 & j == 0){
				maior = x[i][j];
			}

            if(x[i][j]>=maior){
                maior=x[i][j];
            }
        }
    }    

    printf("\n");
    printf("\nMatriz digitada: \n");

     for(i=0 ; i<2 ; i++){
        for(j=0 ; j<2 ; j++){
           printf("%d\t",x[i][j]);
         }
       printf("\n");
    }
    printf("\n");
    
    printf("\nMaior: %d",maior);

    printf("\n\n");

  
    for(i=0 ; i<2 ; i++){
        for(j=0 ; j<2 ; j++){
            y[i][j]=maior*x[i][j];
        }
    }

    for(i=0 ; i<2 ; i++){
        for(j=0 ; j<2 ; j++){
            printf("%d / ",y[i][j]);
        }
    }

    printf("\n");
    printf("\nMatriz resultante: \n");
    
    for(i=0 ; i<2 ; i++){
        for(j=0 ; j<2 ; j++){
           printf("%d\t",y[i][j]);
         }
       printf("\n");
    }
}
