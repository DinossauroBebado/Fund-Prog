//. Leia uma matriz de tamanho 3 × 3. Em seguida, mostre os elementos da diagonal principal (i == j) e calcule o
//valor da soma destes elementos. Ao final do processo mostre o valor da soma calculada.

#include <stdio.h>

int main()
{
#define L 3
#define C 3

    int sum = 0;
    int matriz[L][C];
    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < C; j++)
        {
            printf("Linha %d e coluna %d = :", i, j);
            scanf("%d", &matriz[i][j]);
            if (i == j)
            {
                sum = sum + matriz[i][j];
            }
        }
    }

    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if (i == j)
            {
                printf("%4d", matriz[i][j]);
            }
        }
        printf("\n");
    }
    printf("A soma dos valores : %d", sum);

    return 0;
}