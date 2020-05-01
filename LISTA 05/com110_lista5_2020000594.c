#include <stdio.h>
#include <math.h>

 void main(){

   int lin=14,col=56,i,j,opcao,menu;
    //linhas 0-14 (15 linhas)
    //colunas 0-56 (57 colunas)
    // i->contador linhas
    // j->contador colunas

    // COMECA O MENU

  inicio_menu:
   for(i=0 ; i<=lin ; i++){

     for(j=0 ; j<=col ; j++){

       if (i==0 || i==1 && j<19 || i==1 && j>21 && j<col || i==2 || i==lin || i==lin-1 || j==0 || j==col || j==1 || j==col-1 && i!=1 && col!=20 ) {
         printf("#");

        } else if(i==1 && j==20){
           printf(" MENU DE OPCOES ");
           j=col-21;
        } else if(i==4 && j==3){
            printf(" ESCOLHA A FORMA GEOMETRICA");
            j=col-27;
         }else if(i==6 && j==4){
            printf(" 1. QUADRADO");
            j=col-41;
          }else if(i==7 && j==4){
            printf(" 2. RETANGULO");
            j=col-40;
           }else if(i==8 && j==4){
             printf(" 3. TIANGULO EQUILATERO");
             j=col-30;
            }else if(i==9 && j==4){
              printf(" 4. TRIANGULO RETANGULO (catetos iguais)");
              j=col-13;
             }else if(i==10 && j==4){
               printf(" 5. LOSANGO");
                j=col-42;
              }else if(i==11 && j==4){
                printf(" 6. SAIR");
                 j=col-45;
               }
          else {
         printf(" ");
        }
       }
       printf("\n");
      }
      //TERMINA O MENU



      //int opcao;
      int lado;
      int base,altura,diag;
      int area, perim;

        i=0;
        j=0;
     inicio_opcao:
     //int opcao;
      printf("\nOPCAO: ");
      scanf("%d",&opcao);

      switch (opcao) {
       case 1 :
           printf("\nQUADRADO!");
           printf("\nLADO:");
           scanf("%d",&lado);

           area=lado*lado;
           perim=4*lado;

         	if(lado<=0){
             printf("\nDIGITE UM VALOR VALIDO!!\n\n");
             goto inicio_menu;
           }

				printf("\nÁREA: %d", area);
				printf("\nPERIMETRO: %d\n\n", perim);

				for(j = 0; j < lado + 2; j++){
					printf("_ ");
        }


				printf("\n");

				for(i = 0; i < lado; i++) {
					for(j = 0; j <=lado + 1; j++){

						if(j == 0){
							printf("| ");
						} else if(j == lado + 1) {
							printf("| ");
						} else {
							printf("@ ");
						}
					}

					printf("\n");
				}

				if(i == lado) {
					for(j = 0; j < lado + 2; j++){
						printf("_ ");
					}
				}



			j = 0; //Reseta as variaveis
			i = 0;
			printf("\n\n\n");
      goto inicio_menu;

        case 2 :
           printf("\nRETANGULO!");
           printf("\nBASE:");
           scanf("%d",&base);
           printf("\nALTURA:");
           scanf("%d",&altura);

           if(base<=0 || altura<=0){
             printf("\nDIGITE UM VALOR VALIDO!!\n\n");
             goto inicio_menu;
           }

            area=base*altura;
            perim=(2*base)+(2*altura);

            printf("\nÁREA: %d", area);
			printf("\nPERIMETRO: %d\n\n", perim);

			for(j=0 ; j<base+2; j++){
          printf(" _");
			}

			printf("\n");

			for(i=0 ; i<altura ; i++){
         for(j=0 ; j<=base+2 ; j++){
           if(j == 0){
						printf("| ");
					} else if(j == base + 2) {
						printf("| ");
					} else {
						printf("@ ");
					}

                }printf("\n");
			}
			if(i == altura) {
					for(j = 0; j < base + 2; j++){
						printf(" _");
					}
				}

			 else if (base <= 0) {
				printf("Valor inválido!\n");
			}

			j = 0; //Reseta as variaveis
			i = 0;
			printf("\n\n\n");




           goto inicio_menu ;


       case 3 :
           printf("\nTRIANGULO EQUILATERO!");
           printf("\nBASE:");
           scanf("%d",&base);

           if(base<=0){
             printf("\nDIGITE UM VALOR VALIDO!!\n\n");
             goto inicio_menu;
           }

            float baseT=base,area;
           area=(baseT*baseT)/2;
           perim=base*3;

           printf("\nÁREA: %.f", area);
           printf("\nPERIMETRO: %d\n\n", perim);
           printf("\n");



           for(j=0 ; j<=base ; j++){
             printf(" ");

             if(j==base - i && i==0){
               printf(" .");
             }

           }


           printf("\n");





           for(i=0 ; i<=base ; i++){

            for(j=0 ; j<=base - i; j++){
                printf(" ");

                if(j==base-i-1 && i==0){
                    printf(" / \\");
                }
            }

            for(j=0 ; j<i ; j++){
                if(j==0 && i>0){
                    printf("/");
                }

                if(j==i-1){
                    printf(" @ \\");
                }else{
                printf(" @");
                }
            }
            printf("\n");
           }


           for(j=0 ; j<=base + 1 ; j++){
             if(j==0){
              printf("/ ");
             }  if(j==base+1){
               printf("\\");
             }else {
               printf("_ ");
             }
           }

           i=0;
           j=0;
           printf("\n\n\n");


           goto inicio_menu ;


       case 4 :
           printf("\nTRIANGULO RETANGULO!");
           printf("\nBASE:");
           scanf("%d",&base);

           baseT = base;

           float hip=sqrt(2*(base*base));

           area = (baseT*baseT)/2;
           perim = baseT+baseT+hip;

           printf("\nÁREA: %.f", area);
           printf("\nPERIMETRO: %d\n\n", perim);
           printf("\n");




           if(base<=0){
             printf("\nDIGITE UM VALOR VALIDO!!\n\n");
             goto inicio_menu;
           }

           printf("\n\n");

          printf(" .\n");
          printf(" |\\");

          for(i=0 ; i<=base ; i++){
              for(j=0 ;j<i ; j++){
               if(j==0){
                 printf(" |");
               }


               printf("@");


               if(j== i - 1){
                 printf("\\");
               }


            }
            printf("\n");
           }


          for(j = 0; j <= base; j++){

   				if(j == 0){
   					printf(" |");
   				} if(j == base){
   					printf("_\\");
          } else {
   				  	printf("_");
   			  	}
   			  }

         printf("\n\n\n");


           goto inicio_menu ;


       case 5 :
           printf("\nLOSANGO!");
           printf("\nDIAGONAL :");
           scanf("%d",&diag);

           if(diag<2){
                printf("\nVALOR INVÁLIDO !!!\n\n");
            goto inicio_menu;
           }

           float ladoL, diagL;

           diagL=diag;
           ladoL = sqrt(2*((diagL/2)*(diagL/2)));



           float areaL, perimL;

           areaL=(diagL*diagL)/2;
           perimL=4*ladoL;

           printf("\nÁREA: %.2f", areaL);
           printf("\nPERIMETRO: %.2f\n\n", perimL);
           printf("\n");

            for(j=0 ; j<=diag-i ; j++){
             printf(" ");

             if(j==diag - i && i==0){
               printf(" .");
             }

           }


           printf("\n");





           for(i=0 ; i<=diag ; i++){

            for(j=0 ; j<=diag - i; j++){
                printf(" ");

                if(j==diag-i-1 && i==0){
                    printf(" / \\");
                }
            }

            for(j=0 ; j<i ; j++){
                if(j==0 && i>0){
                    printf("/");
                }

                if(j==i-1){
                    printf(" @ \\");
                }else{
                printf(" @");
                }
            }
            printf("\n");
           }

            for(i=diag - 1 ; i>=0 ; i--){

            for(j=0 ; j<=diag - i; j++){
                printf(" ");

                if(j==diag-i-1 && i==0){
                    printf(" \\ /");
                }
            }

            for(j=0 ; j<i ; j++){
                if(j==0 && i>0){
                    printf("\\");
                }

                if(j==i-1){
                    printf(" @ / ");
                }else{
                printf(" @");
                }
            }
            printf("\n");

          }
          j=0;
          i=0;

          for(j=0 ; j<=diag-i ; j++){
             printf(" ");

             if(j==diag - i && i==0){
               printf(" .");
             }

           }


        printf("\n");


           goto inicio_menu ;


       case 6 :
           printf("\n\n ADIOS !!! \n GRACIAS !!!!");
           break;

       default:
        printf("\nDIGITE UMA OPCAO VALIDA!!\n");
        goto inicio_opcao;

      }
 }


