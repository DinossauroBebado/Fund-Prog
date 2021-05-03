#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define MEDIA 7

typedef struct{
    char nome[50];
    float prova1;
    float prova2;
    float media;
}alunos;
//obs como ler as linhas separadas
int main(){
setlocale(LC_ALL,"Portuguese");

int numeroProvas = 2;

FILE *reprovados = fopen("alunos.txt","r");
if(reprovados==NULL){
     printf("Arquivo nao pode ser aberto");
     exit(1);
}
int N,i;

fscanf(reprovados,"%d",&N);


alunos aln[N];
for(i=0;i<N;i++){
 fscanf(reprovados,"%s",aln[i].nome);
 fscanf(reprovados,"%f",&aln[i].prova1);
 fscanf(reprovados,"%f",&aln[i].prova2);
}
for(i=0;i<N;i++){
  aln[i].media = (aln[i].prova1 + aln[i].prova2)/numeroProvas ;
}
for(i=0;i<N;i++){
    if(aln[i].media<MEDIA){
        printf("%s\n",aln[i].nome);
    }
}

fclose(reprovados);

return 0;
}
