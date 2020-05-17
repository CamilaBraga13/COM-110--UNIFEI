#include <stdio.h>
#include <stdlib.h>

#define vezes 20 //Define quantas vezes o dado foi lançado

int main (){

    int dado[vezes],i,um=0,dois=0,tres=0,quatro=0,cinco=0,seis=0
    ;


    for(i=0 ; i<vezes ; i++){
        printf("\nNumero do dado: ");
        scanf("%d",&dado[i]);

				while(dado[i]<1 || dado[i]>6){
            printf("\nVALOR NAO ACEITO");
            printf("\nDigite um numero entre 1 e 6 : ");
            scanf("%d",&dado[i]);
        }

        if(dado[i]==1){
            um=um+1;
        }

        if(dado[i]==2){
            dois=dois+1;
        }

        if(dado[i]==3){
            tres=tres+1;
        }

        if(dado[i]==4){
            quatro=quatro+1;
        }

        if(dado[i]==5){
            cinco=cinco+1;
        }

        if(dado[i]==6){
            seis=seis+1;
        }
    }

    printf("\nNumeros sorteados: ");
    for(int j=0 ; j<vezes ; j++){

        printf("\nrodada %d = %d",j+1,dado[j]);
    }

    printf("\n1= %d",um);
    printf("\n2= %d",dois);
    printf("\n3= %d",tres);
    printf("\n4= %d",quatro);
    printf("\n5= %d",cinco);
    printf("\n6= %d",seis);










return 0;
}
