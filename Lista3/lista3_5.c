//Modifique o exerc�cio 4 para restringir a agenda ao m�s de setembro de 2018 e incluir a informa��o
//do dia da semana (�Domingo�, �Segunda-Feira�, etc.). O registro desta informa��o deve ocorrer com
//uso coerente de enumera��o. A estrutura de dados deve prever um campo para dia da semana na
//forma de inteiros, e a enumera��o deve ser usada para impress�o da cadeia de caracteres referente
//ao dia da semana.
//

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

enum dia_da_semana
{
    Sabado,
    Domingo,
    Segunda_feira,
    Terca_feira,
    Quarta_feira,
    Quinta_feira,
    Sexta_feira
}; // enum com os dias da semana equivalente ao primeiros dias da semana de 9/18

struct compromisso
{
    int dia, mes, ano, hora, minuto;
    char descricao_compromisso[127];
    enum dia_da_semana sem
};
int main()
{
    int n, i, j;
    char semana[][20] = {"Sabado", "Domingo", "Segunda_feira", "Terca_feira",
                         "Quarta_feira", "Quinta_feira", "Sexta_feira"}; //char com as posi��es equivalente ao enum dia_da_semana
    printf("numero de compromissos:");
    scanf("%d", &n);

    struct compromisso agenda[n];
    for (i = 0; i < n; i++)
    {

        printf("dia:\n");
        scanf("%d", &agenda[i].dia);

        printf("mes:\n");
        scanf("%d", &agenda[i].mes);

        printf("ano:\n");
        scanf("%d", &agenda[i].ano);

        if (agenda[i].dia > 7)
        {
            agenda[i].sem = agenda[i].dia % 7; //pega o resto com 7 para saber o numero do dia da semana
        }
        else
        {
            agenda[i].sem = agenda[i].dia; //usa o dia em si para fazer a equivalencia
        }

        printf("hora:\n");
        scanf("%d", &agenda[i].hora);

        printf("minuto:\n");
        scanf("%d", &agenda[i].minuto);

        printf("Descricao:\n");
        fflush(stdin);
        gets(agenda[i].descricao_compromisso);
        printf("%d", i);
        printf("----------------------------------------------------\n");

        printf("%d de %d compromissos\n", i + 1, n);
    }
    for (j = 0; j < n; j++)
    {
        if (agenda[j].ano == 2018 && agenda[j].mes == 9)
        {
            fflush(stdin);
            // pega a posicao do dia da semana do enum e imprime o char equivalente do array , reduz um pois o mes nao tem dia
            //0 mas o array tem posicao 0
            printf("%d/%d/%d -%s |", agenda[j].dia, agenda[j].mes, agenda[j].ano, semana[agenda[j].sem - 1]);
            printf("%.1d :%.1d |", agenda[j].hora, agenda[j].minuto);
            printf("\n %s \n", agenda[j].descricao_compromisso);

            printf("------------------------------------------------------\n");
        }
        else
        {
            continue;
        }
    }
    return 0;
}
