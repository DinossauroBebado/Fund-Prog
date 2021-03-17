#include <stdio.h>
#include <string.h>

//. Escreva um programa que leia duas strings e a seguir informe se as frases fornecidas são
//iguais. Obs. realizar esta verificação caractere por caractere, leve em consideração também
//que caracteres minúsculos são diferentes de caracteres maiúsculos.
int main()
{
    char frase[100];
    char FRASE[100];
    int igual = 1; //
    int i;
    gets(frase);
    gets(FRASE);

    int n = strlen(frase);
    int N = strlen(FRASE);

    for (i = 0; i < n; i++)
    {
        if (n != N || frase[i] != FRASE[i])
        { // se os tamanhos ou as letras forem diferentes detecta que esta diferente
            igual = 0;
            break;
        }
    }
    if (igual)
        printf("Essas frases sao iguais");
    else
        printf("Essas frases  nao sao iguais");

    return 0;
}
