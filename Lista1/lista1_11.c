//11. Leia uma matriz de tamanho 3 × 3. Em seguida, calcule e escreva o valor da soma dos elementos desta
//matriz.

#include <stdio.h>
#include <conio.h>

int main()
{
#define L 3
#define C 3

    int soma, matriz[L][C];
    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < C; j++)
        {
            printf("Linha %d e coluna %d = :", i, j);
            scanf("%d", &matriz[i][j]);
            soma = soma + matriz[i][j];
        }
    }

    printf("A soma dos elementos eh %d ", soma);

    return 0;
}