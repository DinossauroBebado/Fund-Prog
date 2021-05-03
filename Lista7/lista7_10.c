#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int maior(FILE *arquivo1,FILE *arquivo2){
  char c;
  int ctCaractere1 = 0;

  c = fgetc(arquivo1);
  while (c != EOF) {

    ctCaractere1++;

    c = fgetc(arquivo1);
  }

  int ctCaractere2 = 0;

  c = fgetc(arquivo2);
  while (c != EOF) {

    ctCaractere2++;

    c = fgetc(arquivo2);
  }
  if( ctCaractere2> ctCaractere1)
    return  ctCaractere2;
  else
    return  ctCaractere1;

}



int main(){
setlocale(LC_ALL,"Portuguese");

FILE *arquivo1 = fopen("arquivo1.txt","r");
int n,i;

if(arquivo1==NULL){
     printf("Arquivo nao pode ser aberto");
     exit(1);
}

FILE *arquivo2 = fopen("arquivo2.txt","r");
if(arquivo2==NULL){
     printf("Arquivo nao pode ser aberto");
     exit(1);
}

 n = maior(arquivo1,arquivo2);
rewind(arquivo1);
rewind(arquivo2);
char a,b;
//funcao que verifica se o caracter é uma letra
for(i=0;i<n;i++){
     a = fgetc(arquivo1);
     b = fgetc(arquivo2);
     if(a==b){
        printf("%d - %c\n",i,a);
     }
}

fclose(arquivo1);
fclose(arquivo2);
}
