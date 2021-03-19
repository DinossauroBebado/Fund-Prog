
//Gerencie os resultados de uma prova de m�ltipla escolha, A prova tem 10 quest�es com cinco
//alternativas: a, b, c, d, e. N alunos fizeram esta prova. As notas das provas variam entre 0,0 e 10,0, e a
//nota de aprova��o � 6,0. Assim, o programa deve aplicar de forma coerente struct para o
//modelamento dos dados e realizar as seguintes a��es:
//d. Ler e imprimir o gabarito da prova.
//e. Ler o n�mero de alunos que fizeram a prova.
//f. Ler o nome de cada aluno (m�ximo 20 caracteres) e suas respostas, quest�o a quest�o.
//g. Calcular e imprimir uma tabela com resultados das provas, na qual cada linha deve conter a
//classifica��o na turma pela nota (1.o lugar, 2.o lugar, etc.), o nome, as respostas de cada
//quest�o (indicando se corretas ou n�o � C / E) e a nota final de um determinado aluno; essa
//tabela deve estar ordenada por ordem decrescente das notas na avalia��o e, para cada
//aluno deve ainda haver uma informa��o dizendo se ele est� aprovado ou reprovado

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

#define questoes 10

struct alunos
{
  char nome[20];
  float nota;
  char resposta[questoes];
};

int main()
{
  char gabarito[questoes];
  int n, m, i, j, z, q, k, l = 0;

  //respostas do gabarito
  for (i = 0; i < questoes; i++)
  {
    printf("Gabarito da %d questao :", i + 1);
    fflush(stdin);
    scanf("%c", &gabarito[i]);
  }
  //imprime o gabairto
  for (j = 0; j < questoes; j++)
  {
    printf("%d -- %c\n", j + 1, gabarito[j]);
  }
  // numero de alunos
  printf("Quantos alunos fizeram a prova : \n");
  scanf("%d", &n);

  struct alunos al[n]; //inicia o struct com o numero de alunos
  struct alunos temp[2];

  for (z = 0; z < n; z++)
  {
    printf("Nome do aluno :"); //nome aluno
    fflush(stdin);
    gets(al[z].nome);

    for (q = 0; q < questoes; q++)
    { //recebe as respostas do aluno
      printf("Questao %d:", q + 1);
      fflush(stdin);
      scanf("%c", &al[z].resposta[q]);

      if (al[z].resposta[q] == gabarito[q])
      { //compara a resposta do aluno com a gabarito
        al[z].nota++;
      }
    }
  }
  //selecionar os alunos pela nota
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      if (al[i].nota > al[j].nota)
      {
        temp[0] = al[i]; //criado uma struct holder tempeporaria
        al[i] = al[j];
        al[j] = temp[0];
      }
    }
  }
  printf("Posicao   | nome     | ");
  for (l = 0; l < questoes; l++)
  {
    printf("%.3d |", l);
  }
  printf(" NOTA FINAL | ESTADO| \n");

  for (l = 0; l < n; l++)
  {
    printf("%d.0 lugar | %.20s ", l + 1, al[l].nome);
    for (k = 0; k < questoes; k++)
    {
      printf("|%c / %c", al[l].resposta[k], gabarito[k]);
    }

    float questoe = questoes;
    al[l].nota = al[l].nota * (10.0 / questoe);

    printf("|%.2f |", al[l].nota);
    if (al[l].nota >= 6)
    {
      printf("APROVADO | \n");
    }
    else
    {
      printf("REPROVADO |\n");
    }
  }

  return 0;
}

//fazer a media equivalente ao numero de questoes e dimensionar o gabarito para as questoes
