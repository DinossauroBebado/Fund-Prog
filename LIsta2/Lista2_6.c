/*Desenvolva um programa que leia uma string do teclado e 
através de uma mensagem indique se esta stringrepresenta uma sequência bináriaou não.Um sequência 
binária é formada somente por caracteres 0 ou 1. */
#include <stdio.h>
#include <string.h>

int main()
{
    char binario[100];
    char b;
    int B = 1;
    int i;
    gets(binario);
    b = binario[0]; //pega o primeiro algoritimo para comparar com o resto
    //ideal colocar um funçao para verificar se eh uma string de 0 ou 1
    for (i = 0; binario[i] != '\0'; i++)
    {
        if (binario[i] != b)
        {
            printf("Nao e uma sequencia binaria");
            B = 0;
            break;
        }
    }
    if (B)
    {
        printf("Eh uma sequencia binaria ");
    }
    return 0;
}
