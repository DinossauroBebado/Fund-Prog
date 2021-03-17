//Leia do teclado cinco valores inteiros e os armazene em um vetor. Em seguida, mostre a tabuada de cada
//um dos elementos do vetor.

#include <stdio.h>

int main()
{
#define n 5
#define t 10 //tabuada
    int A[n], m;

    // le os valores

    for (int z = 0; z < n; z++)
    {
        printf("Valor %d = ", z);
        scanf_s("%d", &A[z]);
    }
    //exibe os valores em grid
    //adicao de uma funcao para deixar td os numeros com dois digitos recomendada
    printf("|  |0  |1  |2  |3  |4  |5  |6  |7  |8  |9  |\n");
    for (int i = 0; i < n; i++)
    {
        printf("|%d ", A[i]);
        for (int j = 0; j < t; j++)
        {
            m = A[i] * j;
            printf("|%d ", m);
        }
        printf("\n");
    }

    return 0;
}