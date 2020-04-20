#include <stdio.h>
   #include <math.h>

void main (){

  float y,x=0,n;

  printf("\nDigite um número: ");
  scanf("%f",&n);

  do{
	y=pow(3,x);
	x=x+1;
	printf("\n %.f",y);
  }while(x<=n);
}

