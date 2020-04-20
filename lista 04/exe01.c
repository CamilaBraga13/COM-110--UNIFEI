#include <stdio.h>
  #include <math.h>

void main (){

  float y,x,n=0;

  printf("\nDigite um número: ");
  scanf("%f",&x);

  do{
	y=pow(x,n);
	n=n+1;
	printf("\n %.f",y);
  }while(n<=10);

}


