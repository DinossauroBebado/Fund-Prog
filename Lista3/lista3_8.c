//Crie uma estrutura com dados de registro acadêmico de um aluno. A estrutura deve conter a
//matrícula do aluno (inteiro), nome completo (127 caracteres), nota da primeira prova (float), nota da
//segunda prova (float) e nota da terceira prova (float). A partir desta estrutura, deve ser definida uma
//array de estruturas com N elementos (valor numérico por #define). Então:
//a. Permita ao usuário entrar com os dados de 5 alunos.
//b. Gere os resultados, sempre apresentando o código de matrícula, o nome do aluno e a nota
//relativa com 1 dígito decimal (sem arredondamento).
//i. Encontre o aluno com maior nota da primeira prova.
//ii. Encontre o aluno com a maior média geral.
//iii. Encontre o aluno com a menor média geral.
//iv. Para cada aluno informe se houve aprovação ou reprovação, considerando a média
//6.0 como critério para aprovação

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#define N 5// numero de alunos
#define p 3 //numero de provas

struct alunos {
    int matricula;
    char nome[127];
    float prova[p];
    float media ;
    int aprovado;

};

int main()
{
int i,j,z,k,r ;
int maior_nota,maior_media,menor_media = 0;
float sum = 0 ;
struct alunos al [N];
for(i = 0;i<N;i++){
    printf("Nome completo do aluno :"); //nome aluno
    fflush(stdin);
    gets(al[i].nome);
    printf("Matricula do aluno: ");
    scanf("%d",&al[i].matricula);
    for(j = 0;j < p ;j++){
      printf("Nota da prova %d: ",j+1);
      scanf("%f",&al[i].prova[j]);
      sum = sum + al[i].prova[j];
      }
    al[i].media = sum/p;
    sum = 0 ;

    if (al[i].media>6){
        al[i].aprovado = 1;}

    if (al[i].prova[0]>al[maior_nota].prova[0]){
         maior_nota = i;}

    if (al[i].media>al[maior_media].media){
        maior_media = i;}
    if (al[i].media<al[menor_media].media){
        menor_media = i;}
}
//imprime
printf("---------------------------------------\n");
 for(k = 0;k<N;k++){
    printf("Matricula: %.5d | Nome : %.30s |",al[k].matricula,al[k].nome);
    for(r = 0;r<p;r++){
            printf("Prova %.4d : %.1f |",r + 1,al[k].prova[r]);
    }
    if(al[k].aprovado)
        printf("Aprovado |\n");
    else
        printf("Reprovado|\n");
 }
printf("---------------------------------------\n");
printf("Maior nota na primeira prova : %s\n",al[maior_nota].nome);
printf("---------------------------------------\n");
printf("Maior media : %s\n",al[maior_media].nome);
printf("---------------------------------------\n");
printf("Menor media : %s\n",al[menor_media].nome);
printf("---------------------------------------\n");
return 0 ;
}

//essa porra funciona quando quer


