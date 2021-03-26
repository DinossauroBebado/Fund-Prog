
//Declarar uma estrutura denominada “rgAluno”, para controlar as notas obtidas pelos acadêmicos(as)
//na primeira prova da disciplina de “Fundamentos de Programação”, com os seguintes campos:
//- nome do aluno (como uma cadeia com 35 caracteres)
//- nota (como um valor numérico real)
//Solicite do professor a quantidade de acadêmicos(as), variável “n”, realizaram a avaliação e declarar
//um vetor para armazenar todas os nomes e as notas informadas, por exemplo:
//struct rgAluno turma[n];
//O programa ainda deverá ler todas as notas e os respectivos nomes dos alunos da turma e ao final
//informar: a) a média geral da turma; b) a quantidades de alunos possuem notas acima e abaixo da
//média geral da turma.

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
