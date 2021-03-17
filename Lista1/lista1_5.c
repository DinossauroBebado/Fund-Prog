//Leia um vetor de oito posicoes. Em seguida, leia tambem dois valores inteiros x e y correspondentes a duas
//posicoes do vetor (x e y devem estar compreendidos entre 0 e 7, inclusive). Seu programa devera exibir na
//tela a soma dos valores presentes nas posicoes x e y do vetor lido.

#include <stdio.h>

int main()
{
#define n 8
    int A[n];
    int soma = 0;
    int X, Y;

    // le os valores
    for (int i = 0; i < n; i++)
    {
        printf("Valor %d = ", i);
        scanf_s("%d", &A[i]);
    }
    //ideal fazer uma funcao pra validar os inputs
    printf("Valor de X,Y entre 0 e 7\n");
    scanf("%d ", &X);
    scanf("%d: ", &Y);

    //soma os valores
    soma = A[Y] + A[X];

    printf("A soma entre %d e %d : %d", A[Y], A[X], soma);

    return 0;
}