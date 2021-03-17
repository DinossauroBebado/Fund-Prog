/* Desenvolva um programa que leia uma string do teclado e através de uma mensagem indique se “todos” os 
caracteres da cadeia são caracteres alfabéticos maiúsculos*/
#include <stdio.h>
#include <string.h>

int main()
{
    int cont, i = 0;
    char s[20];
    int M = 1;

    gets(s);

    for (i = 0; s[i] != '\0'; i++)
    {
        if ('a' < s[i])
        {
            printf("Existem caracteres minusculo nessa string");
            M = 0;
            break;
        }
    }
    if (M)
    {
        printf("TODAS os caracteres sao maiusculas");
    }
    return 0;