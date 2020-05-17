
#include <stdio.h>
#include <stdlib.h>

#define tam 50

int main () {

    int n,i;
    char pala[tam],pcrip[tam];
    //pala=palavra inicial
    //pcrip=palavra depois da codificação
    printf("\n---- CRIPTOGRAFIA DE CESAR ----\n\n\n");
    printf("-------------------------------");
  
   numero:
    printf("\nDIgite o quantidade de letras a serem puladas: ");
    scanf("%d",&n);
     
     if(n<0){
         printf("\nNumero invalido!!");
         goto numero;
     }

    begin:
    printf("\nPalavra para criptografar: ");
    scanf("%s",pala);

    i=0;

    while(pala[i] != '\0'){
        pcrip[i]=pala[i]+n;
       
        if((pala[i]+n)>122){ //122 z na tabela ASCII
            pcrip[i]=pcrip[i]-26;
            
        }
        
       if((pala[i]<97)||(pala[i]>122)){
            printf("\nCARACTERE INVALIDO !");
            goto begin ;
        }                
        i++;
    }

    pcrip[i] = '\0';

    printf("\nPalavra criptografada --> %s",pcrip);

return 0;
}

