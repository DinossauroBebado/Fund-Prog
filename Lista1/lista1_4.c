//4. Leia cinco valores do teclado e os armazene em um vetor. Em seguida, o programa deve mostrar na tela os
//valores lidos e a media dos valores.
#include <stdio.h>
#define n 5

int main()
{

    int A[n];
    int soma = 0;
    float media;
    // le os valores
    for (int i = 0; i < n; i++)
    {
        printf("Valor %d = ", i);
        scanf_s("%d", &A[i]);
    }
    //soma os valores
    for (int j = 0; j < n; j++)
    {
        soma = soma + A[j];
    }
    // calcula a media oo pegar a soma e dividir pelo numeros de elementos
    media = soma / n;
    for (int z = 0; z < n; z++)
    {
        printf("A[%d] = %d\n ", z, A[z]);
    }
    printf(" -------------\n ");
    printf("%f", media);
}