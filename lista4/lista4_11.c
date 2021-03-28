//Desenvolver uma estrutura modular com uma fun��o que determina e retorna a pot�ncia de um n�mero. A fun��o
//dever� receber atrav�s de par�metro a base e o expoente da pot�ncia, com um n�mero positivo, e sem utilizar fun��es
//prontas do C dever� realizar o c�lculo atrav�s de um processo de repeti��o. Por exemplo, para os valores 2 para a
//base e 5 para o expoente a fun��o dever� retornar 32 fazendo, 25
//= 2 X 2 X 2 X 2 X 2 = 32.

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int pot(int base, int expoente)
{
    int i, r;
    if (expoente == 0)
        return 1;
    r = 1;
    for (i = 1; i <= expoente; i++)
    {
        r = r * base;
    }

    return r;
}

int main()
{
    int base, expo;
    printf("Base :");
    scanf("%d", &base);
    printf("Expoente:");
    scanf("%d", &expo);

    printf("%d", pot(base, expo));
}
