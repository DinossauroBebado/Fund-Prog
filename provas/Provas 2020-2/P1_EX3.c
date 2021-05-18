//Autor : Guilherme Pires Silva
//Data : 17/5/21
//ex 3

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 2 //define o numero de modelos
typedef char nome_modelo[50];

typedef struct{
 char tipo[50];
 nome_modelo mod[2];
 int qtde[2];
 int total;
 } item;

int main(){

int N_itens = 0;

int i, j, h;

FILE *dados =  fopen("DADOS.txt","r");

if(dados==NULL){
     printf("Arquivo nao pode ser aberto");
     exit(1);
}
fscanf(dados,"%d",&N_itens);

item estoque[N_itens];

for(i=0;i<N_itens;i++){
    fscanf(dados,"%s",estoque[i].tipo);

    fscanf(dados,"%s %d", &estoque[i].mod[0], &estoque[i].qtde[0]);

    fscanf(dados,"%s %d", &estoque[i].mod[1], &estoque[i].qtde[1]); //deixar o numero de modelos separado

    estoque[i].total = estoque[i].qtde[0] + estoque[i].qtde[1] ;

}
FILE *rel =  fopen("RELATORIO.txt","w");
    fprintf(rel,"Itens do almoxarifado:\n\n");
    for(j = 0;j<N_itens;j++){
         fprintf(rel,"\n%d %s:",j,estoque[j].tipo);
         fprintf(rel,"\n a. %s %d",estoque[j].mod[0],estoque[j].qtde[0]);
         fprintf(rel,"\n b. %s %d",estoque[j].mod[1],estoque[j].qtde[1]);
         fprintf(rel,"\nTOTAL: %d\n",estoque[j].total);
         fprintf(rel,"---------------------------------------\n");

    }



fclose(dados);
fclose(rel);
return 0 ;
}
