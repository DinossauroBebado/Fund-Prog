//Desenvolver uma estrutura modular com duas fun��es que recebem atrav�s de par�metro um caractere e retornam na
//primeira fun��o, o correspondente caractere alfab�tico mai�sculo e na segunda fun��o o correspondente caractere
//alfab�tico min�sculo.

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

//-------------------estrutura modular??????

char maiusculo(char c)
{
    char C;
    if (c >= 'A' && c <= 'Z')
    {
        C = c;
    }
    else
    {
        C = c - 32;
    }
    return C;
}

char minusculo(char c)
{
    char C;
    if (c >= 'a' && c <= 'z')
    {
        C = c;
    }
    else
    {
        C = c + 32;
    }
    return C;
}

int main()
{
    char C;
    printf("Digite um caracter");
    scanf("%c", &C);
    printf("Caracter : %c | Maiusculo : %c |Minusculo : %c\n", C, maiusculo(C), minusculo(C));
}
