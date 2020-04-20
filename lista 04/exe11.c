#include <stdio.h>
#include <math.h>

void main(){
  float dian,mesn,anon,diaa,mesa,anoa,idaded,idadem,idadea;
do{
   printf("\nDigite o dia de seu nascimento: ");
   scanf("%f",&dian);

   if(dian<=0 && dian>31){
  printf("\nDIGITE UM DIA VÁLIDO!");
   }

  }while(dian<=0 && dian>31);

do{
   printf("\nDigite o mês de seu nascimento: ");
   scanf("%f",&mesn);
   if(mesn<=0 && mesn>12){
  printf("\nDIGITE UM MES VALIDO");
   }

  }while(mesn<=0 && mesn>12);

do{
   printf("\nDigite o ano de seu nascimento: ");
   scanf("%f",&anon);
   if(anon<0){
  printf("\nDIGITE UM ANO VALIDO");
   }
  }while(anon<0);


  do{
   printf("\nDigite o dia atual: ");
   scanf("%f",&diaa);

   if(diaa<=0 && diaa>31){
  printf("\nDIGITE UM DIA VÁLIDO!");
   }

  }while(diaa<=0 && diaa>31);

do{
   printf("\nDigite o mês atual: ");
   scanf("%f",&mesa);
   if(mesa<=0 && mesa>12){
  printf("\nDIGITE UM MES VALIDO");
  }

  }while(mesa<=0 && mesa>12);

do{
   printf("\nDigite o ano atual: ");
   scanf("%f",&anoa);
   if(anoa<0 || anoa<anon){
  printf("\nDIGITE UM ANO VALIDO");
   }
  }while(anon<0 || anoa<anon );

  idaded=diaa-dian;

  idadem=mesa-mesn;

  idadea=anoa-anon;


if(idaded<0 || idadem <0){
   idadea=idadea-1;
  
  }
printf("\nVocê tem %.f anos!",idadea);

}

