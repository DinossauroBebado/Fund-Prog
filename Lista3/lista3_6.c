#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct equipamento
{
    char nome[50];
    float potencia, tempo_ativo, comsumo_mensal, porce;
};

char fim[1];
float soma_comsumo = 0;
int comsumidor, n, i, j, z;
float maior = 0;

int main()
{
    printf("Quer computar quantos aparelhos ? \n");
    scanf("%d", &n);
    struct equipamento equip[n];
    for (i = 0; i < n; i++)
    {
        printf("Nome do eletrodomestico:");
        fflush(stdin);
        gets(equip[i].nome);

        printf("Potencia:");
        scanf("%f", &equip[i].potencia);

        printf("Tempo que o aparelho fica ligado(H):");
        scanf("%f", &equip[i].tempo_ativo);

        equip[i].comsumo_mensal = (equip[i].tempo_ativo * equip[i].potencia * 30) / 1000;

        soma_comsumo = soma_comsumo + equip[i].comsumo_mensal;

        printf("--------------------------------------------------\n\n");
    }

    for (j = 0; j < n; j++)
    {

        equip[j].porce = equip[j].comsumo_mensal / soma_comsumo;

        if (equip[j].porce > maior)
        {
            comsumidor = j;
            maior = equip[j].porce ;
        }
    }
    printf("------RELATORIO----------\n");
    for (z = 0; z < n; z++)
    {
        printf("Nome:");
        printf("%s", equip[z].nome);

        printf("| Potencia:");
        printf("%.2f |", equip[z].potencia);

        printf(" Horas ativo no dia :");
        printf("%.2f |", equip[z].tempo_ativo);

        printf(" Consumo mensal em Kwh:");
        printf("%.2f |", equip[z].comsumo_mensal);

        printf(" Porcentagem do total de consumo:");
        printf("%.2f ", equip[z].porce*100);
        printf("%%|\n");
    }
    printf("O equipamento que mais consome energia e :%s", equip[comsumidor].nome);

    return 0;
}
