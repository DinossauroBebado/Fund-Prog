/*Sem utilizar a função “strlen”, faça um programa que leia uma string e 
imprima na telaquantos caracteres ela possui. */

#include <stdio.h>

int main()
{
    int cont, i = 0;
    char s[20];

    gets(s);
    // conta espaços, mas espaço é um caracter
    for (i = 0; s[i] != '\0'; i++)
    {
        cont++;
    }
    printf("A string tem %d caracteres", cont);
    return 0;
}