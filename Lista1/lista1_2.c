//2. Leia do teclado sete valores inteiros e os armazene em um vetor “A”. Em seguida, o programa devera
//construir um vetor “B” de mesmo tamanho, obedecendo a seguinte regra de formacao:
//a) Bi devera receber -1 quando Ai for menor que 50;
//b) Bi devera receber 0 quando Ai for igual a 50; e
//c) Bi devera receber 1 quando Ai for maior que 50.
//Ao final do processo mostre os vetores “A” e “B” na tela.

#include <stdio.h>

int main()
{
#define n 7
    int A[n], B[n];
    // le os valores
    for (int i = 0; i < n; i++)
    {
        printf("Valor %d = ", i);
        scanf_s("%d", &A[i]);
    }
    //verifica condicao
    for (int j = 0; j < n; j++)
    {
        if (A[j] == 50)
        {
            B[j] = 0;
        }
        else if (A[j] > 50)
        {
            B[j] = 1;
        }
        else
        {
            B[j] = -1;
        }
    }
    //imprime vetores
    for (int z = 0; z < n; z++)
    {
        printf("A[%d] = %d | B[%d] = %d \n ", z, A[z], z, B[z]);
    }
}