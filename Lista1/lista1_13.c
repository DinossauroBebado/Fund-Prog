
#include <stdio.h>
// Leia uma matriz de tamanho 10 × 3 com as notas de 10 alunos em 3 provas. Em seguida, apresente na tela
//a media de cada uma das 3 provas.

int main()
{
#define aluno 10
#define prova 3

    float provas[aluno][prova];
    float soma = 0;

    for (int i = 0; i < aluno; i++)
    {
        for (int j = 0; j < prova; j++)
        {
            printf("A nota do aluno %d na prova %d eh :  ", i + 1, j + 1);
            scanf("%f", &provas[i][j]);
        }
    }
    //passa pelos alunos mantendo a mesma prova e soma todos os valores em uma variavel
    for (int i = 0; i < prova; i++)
    {
        for (int j = 0; j < aluno; j++)
        {
            soma = soma + provas[j][i];
        }
        //divide a soma pelo numero de alunos e mostra  o resultado
        printf("A media da prova %d eh %f\n", i+1, soma / aluno);
        soma = 0;
    }

    return 0;
}
