- #include <stdio.h>
void main (){
 
  float min,seg;
do{
  printf("\n Quantos minutos você deseja transformar em segundos : ");
  scanf("%f",&min);

   if(min<0){
 	printf("\nDIGITE UM VALOR VÁLIDO PARA MINUTO");
	}
}while(min<0);

  seg=min*60;
  printf("\n%.2f minutos sao iguais a %.f segundos",min,seg);
}





