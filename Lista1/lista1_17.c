//17. Dado um vetor “a” com os seguintes elementos:
//int a[10] = {10, 2, 7, 8, 5, 3, 22, 17, 18, 6};
//Construir um programa que leia um valor inteiro do teclado (variavel “item”) e a seguir implemente a rotina de
//busca sequencial (do primeiro até encontrar; ou até o final e não encontrar), para pesquisar se um dado
//“item” está armazenado em “a”.
//Mostre o resultado da busca: encontrou; ou não encontrou “item” em “a” como resultado final.
#include <stdio.h>

int main()
{
#define t 10 //tamanho vetor

    int item;
    int a[10] = {10, 2, 7, 8, 5, 3, 22, 17, 18, 6};
    int pos, encontrou = 0;

    scanf("%d", &item);

    for (int j = 0; j < t; j++)
    {
        if (item == a[j])
        {
            encontrou = 1;
            pos = j;
        }
    }
    if (encontrou)
    {
        printf("Encontrou %d em %d ", item, pos);
    }
    else
    {
        printf("Nao encotrou %d", item);
    }

    return 0;
}