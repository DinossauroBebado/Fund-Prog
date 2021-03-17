//Criar um vetor de 10 posições (variavel “x”), sendo que cada elemento de “x” pela potencia de base 2
//elevado ao expoente igual a posição do respectivo elemento, ou seja:
//x[i] = 2i
//.
//Mostre os elementos do vetor “x” como resultado final.

#include <stdio.h>
#include <math.h>

int main()
{
#define t 10 //tamanho vetor

    int a, x[t];

    scanf("%d", &a);

    for (int j = 0; j < t; j++)
    {
        x[j] = pow(a, j);
    }
    printf("----\n");
    for (int i = 0; i < t; i++)
    {
        printf("%d\n", x[i]);
    }

    return 0;
}
