/*Faça um programa que leia uma string do teclado e que conte e imprima na tela 
quantasvogais (maiúsculas e minúsculas) ela possui. */
#include <stdio.h>
#include <string.h>

int main()
{
    int cont, i, j = 0;
    char s[20];
    char vogais[10] = "aeiouAEIOU";

    gets(s);
    //emtender pq a funcao strlen dobrava o resultado
    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (s[i] == vogais[j])
            {
                cont++;
            }
        }
    }
    printf("A string tem %d vogais", cont);
    return 0;
}