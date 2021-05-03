//Escreva um programa que abra um arquivo texto e conte o número de caracteres presentes nele.
//Imprima o número de caracteres na tela.
#include <stdio.h>
#include <stdlib.h>



int main() {
  char nomeArquivo[100];

  printf("Informe o nome do arquivo:\n");
  fflush(stdin);
  gets(nomeArquivo);

  FILE *arq;
  arq = fopen(nomeArquivo, "r");
  if (arq == NULL) {
     printf("Arquivo \"%s\", nao foi localizado.\n", nomeArquivo);
     fclose(arq);
     return(0);
  }

  char c;
  int ctCaractere = 0;

  c = fgetc(arq);
  while (c != EOF) {
    //printf("%c", c);

    ctCaractere++;

    c = fgetc(arq);
  }

  printf("\nNo arquivo lido existem %d caracteres.\n", ctCaractere);

  fclose(arq);

  return(0);
}




