#include <stdio.h>
#include <stdlib.h>

void main(){

	int v[7];
  int i,j,z,aux;

  printf("\n\t\tDIGITE APENAS NUMEROS INTEIROS!!!\n\n\n");
   for(i=0 ; i<8 ; i++){

    printf("\nv[%d]=",i+1);
		scanf("%d",&aux);

    for(j=0 ; v[j]<aux && j<i ; j++);

    for(z=i ; z >=j+1 ; z--){
      	v[z] = v[z - 1];
    }

    v[j]=aux;



   }
for(i=0 ; i<8 ; i++){
      printf("%d\t/\t",v[i]);
}



}
