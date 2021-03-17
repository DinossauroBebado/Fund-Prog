//Dado um vetor “a” com os seguintes elementos:
//int a[10] = {10, 2, 7, 8, 5, 3, 22, 17, 18, 6};
//Construir um vetor “b” de mesmo tipo e tamanho, sendo que cada, elemento do vetor “b” devera ser o resto
//da divisao do respectivo elemento de “a” por 2 (dois), ou seja:
//b[i] = a[i] % 2.
//Mostre os elementos dos vetores “a” e “b” como resultado final.

#include <stdio.h>
#include <math.h>

int main()
{
#define t 10 //tamanho vetor

    int b[t];
    int a[10] = {10, 2, 7, 8, 5, 3, 22, 17, 18, 6};

    for (int j = 0; j < t; j++)
    {
        b[j] = a[j] % 2;
    }
    for (int i = 0; i < t; i++)
    {
        printf("%d\n", b[i]);
    }

    return 0;
}