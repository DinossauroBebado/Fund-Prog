#include <stdio.h>
#include <string.h>

//Escreva um programa que leia uma string e a seguir implemente um algoritmo que conte e
//imprima quantidade de caracteres de cada palavra desta string. Leve em consideração que
//entre as palavras existem um, e somente um, caractere espaço. Lembre-se também que no
//final da string também tem uma palavra.

int main()
{
    char frase[100];
    int palavra[100]; // variavel para identificar as palavras

    int cont_caracter, cont_palavra, i, j = 0; //conta quantos caracteres tem em cada palavra
                                               // conta o numero de palavras
    gets(frase);

    int n = strlen(frase);
    for (i = 0; i < n; i++)
    {
        if (frase[i] != 32)
        {                                          // procura pelo espaço(ASCII)
            cont_caracter++;                       //soma um caractes
            palavra[cont_palavra] = cont_caracter; //atualiza no array
        }
        else
        {
            cont_caracter = 0; //recomeçar uma nova palavra
            cont_palavra++;
        }
    }
    for (j = 0; j <= cont_palavra; j++)
    {
        printf("A %d palavra tem %d caracteres\n", j + 1, palavra[j]);
    }
    return 0;
}