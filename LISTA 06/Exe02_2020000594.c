#include <stdio.h>
#include <stdlib.h>

#define turma 10 // define o numero total de alunos
#define quaque 8 // quantidade de questoes da prova

int main(){

  char gab[quaque],resp[quaque];
  int i,j,k,x,aluno,matr[turma] ,pontos=0;
  float aprov,porcen_aprv;

  printf("\n\t\tATENCAO!!!!\tUse apenas uma letra por questao!!\n\n\n");

  printf("\nDigite as respostas do gabarito: ");
  for(i=0 ; i<quaque ; i++){

  	printf("\nQuestao %d: ",i+1);
      scanf(" %c",&gab[i]);



  }

  printf("\n-------------------------------\n");



	for(j=0 ; j<turma ; j ++){



   matricula:

    printf("\nDigite sua matricula: ");
    scanf("%d",&aluno);


    for (int x=0 ; x<turma ; x++){



        if(aluno==matr[x]){
            printf("\n-------------------------------\n");
            printf("\nMatricula ja inserida!");
            printf("\nInsira um novo numero de matricula: \n");
            printf("\n-------------------------------\n");

            goto matricula;
        }

    }
    matr[j]=aluno;


    pontos=0;
    printf("Digite suas respostas\n");

    for(k=0 ; k<quaque ; k++){




      printf("Questao %d: ",k+1);
      scanf(" %c",&resp[k]);


      if(resp[k] == gab[k]){
        pontos++;

      }

    }

    printf("\nAluno %d",matr[j]);
    printf("\nSua pontuacao foi: %d\n\n",pontos);

    if(pontos>=6){
        aprov=aprov+1;
    }

    pontos=0;
    printf("\n-------------------------------\n");


  }

  porcen_aprv = (aprov * 100) / turma ;

    printf("\nA porcentagem de alunos aprovados e: %.2f %c .\n",porcen_aprv,37);

  return 0;
  }
