#include <stdio.h>
#include <string.h>

//Desenvolva um programa que leia uma string do teclado é determine se a palavra lida representa um
//palíndromo ou não. Exemplo de palavras palíndromas: ovo, natan, sos, arara, etc.
int main()
{
    char palavra[100];
    int i, n, palindromo;
    gets(palavra);
    n = strlen(palavra);
    for (i = 0; i < n; i++)
    {
        if (palavra[i] == palavra[(n - 1) - i]) //compara a primeira letra com a ultima
        {
            palindromo = 1;
        }
        else
        {
            palindromo = 0;
            break;
        }
    }
    if (palindromo)
    {
        printf("%s eh um palidromo", palavra);
    }
    else
    {
        printf("%s nao eh um palidromo", palavra);
    }

    return 0;
}