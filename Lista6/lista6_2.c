//Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura deve
//conter o c�digo da disciplina, nome do aluno e as notas de tr�s provas. Fa�a um
//programa que mostre o tamanho (em bytes) dessa estrutura.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno{
  int codigo;
  char nome[20];
  float p1,p2,p3;

};

int main(){
    struct aluno al ;
printf("%d", sizeof(al));


}
