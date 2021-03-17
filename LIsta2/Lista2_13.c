#include <stdio.h>
#include <string.h>

//Escreva um programa que leia uma string e a seguir implemente um algoritmo que conte e
//imprima a quantidade de palavras existentes nesta string. Leve em consideração que entre as
//palavras existem um, e somente um, caractere espaço. Lembre-se também que no final da
//string também tem uma palavra.
int main()
{
    char frase[100];
    int cont, i = 0; //

    gets(frase);

    int n = strlen(frase);

    for (i = 0; i < n; i++)
    {
        if (frase[i] == 32)
        { // procura pelo espaço(ASCII)
            cont++;
        }
    }
    cont++; //fazer uma função para checar se a string esta vazio deste jeito se vc nao colocar nada ele ainda conta 1
    printf("Nessa frase tem %d palavras", cont);

    return 0;
}