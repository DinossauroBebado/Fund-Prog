//1. Uma fun��o receba como par�metro dois n�meros e retorne o maior deles.

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

#define n 2

int max(int x, int y)
{
    //compara os dois inteiros buscando o maior
    //entrada dois numeros inteiros
    //saida :o maior inteiro
    if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

int main()
{
    int i, numeros[n];

    printf("Numeros para comparar : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d/%d :", i + 1, n);
        scanf("%d", &numeros[i]);
    }
    printf("o maior numero eh %d", max(numeros[0], numeros[1]));

    return 0;
}
