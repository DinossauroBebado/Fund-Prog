
//Declarar uma estrutura denominada �rgAluno�, para controlar as notas obtidas pelos acad�micos(as)
//na primeira prova da disciplina de �Fundamentos de Programa��o�, com os seguintes campos:
//- nome do aluno (como uma cadeia com 35 caracteres)
//- nota (como um valor num�rico real)
//Solicite do professor a quantidade de acad�micos(as), vari�vel �n�, realizaram a avalia��o e declarar
//um vetor para armazenar todas os nomes e as notas informadas, por exemplo:
//struct rgAluno turma[n];
//O programa ainda dever� ler todas as notas e os respectivos nomes dos alunos da turma e ao final
//informar: a) a m�dia geral da turma; b) a quantidades de alunos possuem notas acima e abaixo da
//m�dia geral da turma.

#include <stdio.h>
#include <stdlib.h>

int n, i, count=0;
float media=0;

struct rgAluno
{
    char nome[35];
    float nota;
};

int main()
{
    printf("Digite o numero de alunos: ");
    scanf(" %d", &n);

    struct rgAluno aluno;
    char turma[n];
    int notas[n];

    for (i=0; i<n; i++)
    {
        printf("Nome do aluno: ");
        scanf(" %s", &aluno.nome);

        printf("Nota obtida: ");
        scanf(" %f", &aluno.nota);

        media = media + aluno.nota;

        turma[i] = ("%c - %f",aluno.nome, aluno.nota);
        notas[i] = aluno.nota;
    }

    printf("A media geral da turma foi: %f.", media);

    for (i=0; i<n; i++)
    {
        if (notas[i]>=media)
        {
            count = count + 1;
        }
    }
    printf("%d alunos ficaram acima da media geral!", count);
}
