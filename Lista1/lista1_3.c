//3. Leia do teclado dez valores inteiros e os armazene em um vetor. Em seguida, o programa deve calcular e
//escrever a quantidade de elementos armazenados neste vetor que sao pares.

#include <stdio.h>

int main()
{
#define n 10
    int A[n];
    int contador = 0;
    // le os valores
    for (int i = 0; i < n; i++)
    {
        printf("Valor %d = ", i);
        scanf_s("%d", &A[i]);
    }
    //verifica condicao
    for (int j = 0; j < n; j++)
    {
        if (A[j] % 2 == 0)
        { //se nao houver resto é pq é par
            contador++;
        }
    }
    printf("Existe %d elementos pares nesse vetor", contador);
}