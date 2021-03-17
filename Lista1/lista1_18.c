//8. Dados dois vetores “a” e “b” com 6 elementos inteiros cada. Implementar um programa que verifica se os
//v/etores sao iguais na ordem.
//Exemplo 1:
//int a[6] = {1, 2, 3, 4, 5, 6};
//int b[6] = {1, 2, 3, 4, 5, 6};
//Os vetores “a” e “b” sao iguais.
//Exemplo 2:
//int a[6] = {1, 2, 3, 4, 5, 6};
//int b[6] = {1, 6, 3, 4, 5, 2};
//Os vetores “a” e “b” sao diferentes.
//Mostre os valores dos vetores “a” e “b” e o resultado da verificacao: sao iguais; ou sao diferentes.

#include <stdio.h>

int main()
{
#define t 6 //tamanho vetor

    int item;
    int a[t], b[t];
    int diferente = 0;

    printf("Vetor A\n");
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Vetor B\n");
    for (int j = 0; j < t; j++)
    {
        scanf("%d", &b[j]);
        if (a[j] != b[j])
        { // ja aproveita o loop para verificar a condicao
            diferente = 1;
        }
    }
    for (int z = 0; z < t; z++)
    {
        printf("A[%d]= %d |B[%d]= %d |\n", z, a[z], z, b[z]);
    }

    if (diferente)
    {
        printf("A e B sao diferenes");
    }
    else
    {
        printf("A e B sao iguais ");
    }

    return 0;
}
