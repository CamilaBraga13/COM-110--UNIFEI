#include <stdio.h>
#include <stdlib.h>

#define tam 10 
int main (){

    char pala[tam];

    for(int i=0 ; i<tam ; i++){
        printf("\n %d° letra: ",i+1);
        scanf(" %c",&pala[i]);
    }

    for(int i=tam ; i>=0 ; i--){
        printf(" %c - ",pala[i]);
    }




return 0;
}
