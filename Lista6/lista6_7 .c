//
//Fa�a um programa que receba, armazene e imprima na tela o nome e a idade
//de um n�mero de pessoas fornecido pelo usu�rio. (Obs.: Utilize struct e aloca��o
//din�mica de mem�ria).



#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{

int idade ;
char nome[30];

}info;

int main(){
  int n,i ;
  printf("Informe o numero de pessoas: ");
  scanf("%d", &n);


  info *inf = (info *)malloc(n*sizeof(info));

  for(i=0;i<n;i++){



  printf("---------%d------------\n",i);

  fflush(stdin);
  printf("Nome: ");
  gets(inf[i].nome);

  printf("Idade: ");
  scanf("%d",&inf[i].idade);

  }
  printf("-------------------------------------------\n");
   for(i=0;i<n;i++){



  printf("---------%d------------\n",i);

  fflush(stdin);
  printf("Nome: %s\n",inf[i].nome);

  printf("Idade: %d\n",inf[i].idade);
   }

   printf("-------------------------------------------\n");
return 0;
}
