//
//Criar um programa que leia do usuário um número inteiro menor do que 10 e maior do que zero. Após
//ler esse número, o programa deverá gerar em arquivo texto, a tabuada desse número.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define TABUADA 11

int main(){
setlocale(LC_ALL,"Portuguese");

int n,N,i ;

do{
    printf("n :");
    scanf("%d",&n);
}while(n<0||n>10);

//gera string com o nome da tabuada
N = n;
char h[2];
sprintf(h, "%d", n);
char str[9]="tabuada";
strcat ( str,h);
strcat ( str, ".txt");

FILE *tabuada = fopen(str,"w");
if(tabuada==NULL){
    printf("Arquivo nao pode ser aberto");
    exit(1);
}
for(i=1;i<TABUADA;i++){
    fprintf(tabuada," %d X %d = %d\n",N,i,N*i);
}

fclose(tabuada);
}
