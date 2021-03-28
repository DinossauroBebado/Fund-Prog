//Escrever um programa que leia dois vetores (tipo int) de tamanhos igual a 5. Fa�a uma fun��o que receba como
//par�metros os vetores lidos e gere um novo vetor que corresponda � concatena��o dos vetores passados como
//par�metro

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

//---------------------------------------------------------------nao funciona

int concat(int A[5], int B[5], int C[])
{
    int i;
    for (i = 0; i <= 9; i++)
    {
        if (i < 5)
        {
            C[i] = A[i];
        }
        else
        {
            C[i] = B[i - 5];
        }
    }
}

int main()
{

    int i, j, z, A[5], B[5], C[10];
    printf("Vetor A : \n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("Vetor B : \n");
    for (j = 0; j < 5; j++)
    {
        scanf("%d", &B[j]);
    }

    concat(A, B, C);

    printf("Vetor C : \n");
    for (z = 0; z < 10; z++)
    {
        printf("%d ", C[z]);
    }
}
