//Receba do usuario dois vetores “a” e “b”, com 10 inteiros cada. Crie um novo vetor “c” calculando “c = a – b”
//e mostre na tela os dados dos 3 vetores.

#include <stdio.h>

int main()
{
#define n 10
    int A[n], B[n], C[n];

    // le os valores
    printf("Vetor A\n ");
    for (int i = 0; i < n; i++)
    {
        printf("Valor %d = ", i);
        scanf_s("%d", &A[i]);
    }
    printf("Vetor B\n ");
    for (int z = 0; z < n; z++)
    {
        printf("Valor %d = ", z);
        scanf_s("%d", &B[z]);
    }
    //faz a operacao
    for (int j = 0; j < n; j++)
    {
        C[j] = A[j] - B[j];
    }
    //imprime
    for (int h = 0; h < n; h++)
    {
        printf("A[%d] = %d |B[%d] = %d |C[%d] = %d |\n", h, A[h], h, B[h], h, C[h]);
    }
    return 0;
}