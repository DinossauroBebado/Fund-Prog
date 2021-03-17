//Leia uma matriz de tamanho 4 × 4. Em seguida, conte e exiba na tela quantos elementos negativos ela
//possui.

#include <stdio.h>
#include <conio.h>

int main()
{
#define L 4
#define C 4

    int cont, matriz[L][C];
    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < C; j++)
        {
            printf("Linha %d e coluna %d = :", i, j);
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j] < 0)
            {
                cont++;
            }
        }
    }

    printf("Tem %d numeros negativos ", cont);

    return 0;
}