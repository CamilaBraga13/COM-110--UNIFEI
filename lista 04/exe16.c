#include <stdio.h>

void main (){
  int a,b,x,i,j;

  printf("\nDigite um número:");
  scanf("%d",&b);
 
  
  printf("\nDigite outro número: ");
   scanf("%d",&j);

  if(j>=b){
   for(a=b ; a<= j ; a++){
     for(i=0 ; i<=10 ; i++){
      x=a*i;
     printf("\n%d x %d = %d",a,i,x);
    }
   printf("\n\n");
   }
  }


  if(j<b){
   for(a=b ; a >= j ; a--){
     for(i=0 ; i<=10 ; i++){
      x=a*i;
      printf("\n%d x %d = %d",a,i,x);
    }
   printf("\n\n");
  }
  }
}

