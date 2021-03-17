//Receba do usuario um vetor com 10 posicoes. Em seguida, deverão ser impressos na tela o maior e o
//menor elemento desse vetor.
#include <stdio.h>

int main()
{
#define n 10
    int A[n];

    // le os valores
    for (int i = 0; i < n; i++)
    {
        printf("Valor %d = ", i);
        scanf_s("%d", &A[i]);
    }
    //as variaveis tem que entrar com uma valor da lista
    //para evitar um valor estranho a lista no resultado
    // Ex : maior = 0 e tds os valores negativos
    int menor = A[0];
    int maior = A[0];
    for (int j = 0; j < n; j++)
    {
        if (A[j] >= maior)
        {
            maior = A[j];
        }
        if (A[j] <= menor)
        {
            menor = A[j];
        }
    }

    printf("O maior eh : %d\n", maior);
    printf("O menor eh : %d\n", menor);

    return 0;
}