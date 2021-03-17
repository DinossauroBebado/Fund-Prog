#include <stdio.h>

 struct rg_aluno{
      char nome_aluno[35] ;
      float nota ;
    };

int main()
{
  int n;
  float soma = 0;
  int cont_cima = 0;
  printf("Numero de alunos:");
  scanf("%d",&n);

  struct rg_aluno turma[n] ;


  for(int i = 0;i<n;i++){
    printf("Aluno :",i+1);
    scanf("%s",&turma[i].nome_aluno);

    printf("Nota:");
    scanf("%f",&turma[i].nota);

    soma = (soma + turma[i].nota);
  }

  float media = soma/n ;
  printf("-----------------\n");
  for(int j = 0;j<n;j++){
    if(turma[j].nota>media)
        cont_cima++;
    printf("O aluno %s tem a nota: %.2f\n",turma[j].nome_aluno,turma[j].nota);
  }
   printf("-----------------\n");
   printf("A media da turma eh %.2f\n",media);
   printf("%d alunos ficaram acima da media e %d alunos ficaram abaixo da media ",cont_cima,n-cont_cima);

    return 0;
}
