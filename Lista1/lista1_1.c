//1. Leia do teclado seis valores inteiros e em seguida mostre na tela os valores lidos na ordem inversa.

#include <stdio.h>

int main()
{
#define n 6
    int nota[n];
    for (int i = 0; i < n; i++)
    {
        printf("Nota aluno %d = ", i);
        scanf_s("%d", &nota[i]);
    }
    for (int j = n - 1; j >= 0; j--)
    {
        printf("%d\n", nota[j]);
    }
}