//Crie uma estrutura Cota��o para monitorar a��es da bolsa de valores. A estrutura tem os seguintes
//campos:
//a. Nome da companhia (50 caracteres).
//b. �rea de atua��o da companhia (50 caracteres).
//c. Estrutura Valor.
//A estrutura Valor, por sua vez, � uma estrutura com os campos:
//a. Valor neste momento da a��o (em Reais).
//b. Valor da a��o na hora da abertura da bolsa.
//c. Varia��o da a��o em porcentagem, ou seja, quanto a a��o cresceu ou caiu desde a
//abertura at� o momento atual (de 0.0 a 100.0%).
//O programa deve criar um vetor com n elementos do tipo da estrutura Cota��o, solicitando n ao
//usu�rio. O programa deve ent�o colher do usu�rio as informa��es dos campos (a) at� (c), com
//exce��o do campo iii da estrutura Valor, a qual deve ser calculada pelo programa. Em seguida,
//deve imprimir em tela, por ordem decrescente de valoriza��o a lista das a��es e suas
//correspondentes valoriza��es.

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

struct valor
{
    float valor_atual, valor_abertura, valor_var;
};

struct cotacao
{
    char nome[50], area_atuacao[50];

    struct valor val;
};

int main()
{
    int n, z, i, j, l;

    // numero de alunos
    printf("Quantas acoes a serem analisadas : \n");
    scanf("%d", &n);

    struct cotacao cot[n]; //inicia o struct com o numero de alunos
    struct cotacao temp[2];

    for (z = 0; z < n; z++)
    {
        printf("Nome da empresa :"); //nome empresa
        fflush(stdin);
        gets(cot[z].nome);

        printf("Area de atua��o da companhia :"); //atua�ao
        fflush(stdin);
        gets(cot[z].area_atuacao);

        printf("Valor da acao neste momento em reais :"); //nome aluno
        fflush(stdin);
        scanf("%f", &cot[z].val.valor_atual);

        printf("Valor da ac�o na hora da abertura da bolsa em reais:"); //nome aluno
        fflush(stdin);
        scanf("%f", &cot[z].val.valor_abertura);
        //  se o aumento foi positivo ou negativo
        if (cot[z].val.valor_atual < cot[z].val.valor_abertura)
        {
            cot[z].val.valor_var = -(cot[z].val.valor_atual / cot[z].val.valor_abertura) * 100;
        }
        else
        {
            cot[z].val.valor_var = (cot[z].val.valor_atual / cot[z].val.valor_abertura) * 100;
        }
    }

    //selecionar as acoes por valorizacao
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (cot[i].val.valor_var > cot[j].val.valor_var)
            {
                temp[0] = cot[i]; //criado uma struct holder tempeporaria
                cot[i] = cot[j];
                cot[j] = temp[0];
            }
        }
    }

    for (l = 0; l < n; l++)
    {
        printf("|%.50s|", cot[l].nome);
        printf("|%.50s|", cot[l].area_atuacao);
        printf("|%.2f |", cot[l].val.valor_atual);
        printf("|%.2f |", cot[l].val.valor_abertura);
        printf("|%.2f |\n", cot[l].val.valor_var);
    }

    return 0;
}
