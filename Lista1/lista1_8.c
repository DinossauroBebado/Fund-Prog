//Leia do teclado um vetor de 10 numeros de ponto flutuante (reais). Em seguida, ordene os elementos desse
//vetor em ordem crescente e apresente o resultado na tela.

#include <stdio.h>

int main()
{
#define n 10
    float A[n];
    float temp = 0; //variavel para manter o valor da matrix enquanto se

    // le os valores

    for (int z = 0; z < n; z++)
    {
        printf("Valor %d = ", z);
        scanf_s("%f", &A[z]);
    }
    // pega o valor do loop de fora(i) e compara com tds no loop de dentro
    // se o valor for maior ele troca as posicoes entao ele vai trocando ate
    //tds os items estiverem na posicao certa
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (A[i] < A[j])
            {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }

    for (int h = 0; h < n; h++)
    {
        printf("|A[%d] = %f|\n", h, A[h]);
    }
    return 0;
}
