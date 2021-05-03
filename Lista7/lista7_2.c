//Escreva um programa que leia do usuário os nomes de dois arquivos de texto. Crie um terceiro arquivo
//de texto com o conteúdo dos dois primeiros juntos (o conteúdo do primeiro seguido do conteúdo do
//segundo).

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");
char c,n_arqA[100], n_arqB[100],n_arqC[100];

printf("Arquivo A : ");
fflush(stdin);
gets(n_arqA);

printf("Arquivo B : ");
fflush(stdin);
gets(n_arqB);

FILE *arqA;
  arqA = fopen(n_arqA, "r");
  if(arqA==NULL)
    {
        printf("Arquivo nao existe\n");
        exit(1);
    }

FILE *arqB;
  arqB = fopen(n_arqB, "r");
  if(arqB==NULL)
    {
        printf("Arquivo nao existe\n");
        exit(1);
    }
FILE *arqC ;
    arqC=fopen("arqC.txt","w");
    while(!feof(arqA))
    {
        c=getc(arqA);
        putc(c,arqC);
    }
    fclose(arqA);
    while(!feof(arqB))
    {
        c=getc(arqB);
        putc(c,arqC);
    }
    fclose(arqB);
    fclose(arqC);
    printf("DONE");










return 0 ;
}
