#include <stdio.h>

void main (){
  int i,j,n;
 
 do{
   printf("\nDigite um número: ");
    scanf("%d",&n);

   if(n<2){
     printf("\nDIGITE UM NÚMERO MAIOR OU IGAUL A 2 !\n");
    }
 }while(n<2);

  for(i=1 ; i<=n ; i++){
    for(j=1 ; j<=i ; j++){
      printf("#");
    }
    printf("\n");
  }



}

