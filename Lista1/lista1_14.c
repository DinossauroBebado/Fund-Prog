//. Leia um valor inteiro (variavel “a”) e a seguir construa um vetor de 10 posicoes (variavel “x”) com o resultado
///da seguinte expressao:
//x[i] = a + i; para todo “i” variando de 0 até 9;
//Mostre os elementos do vetor “x” como resultado final

#include <stdio.h>

int main()
{
#define t 10 //tamanho vetor

    int a, x[t];

    scanf("%d", &a);

    for (int j = 0; j < t; j++)
    {
        x[j] = a + j;
    }
    printf("----\n");
    for (int i = 0; i < t; i++)
    {
        printf("%d\n", x[i]);
    }

    return 0;
}