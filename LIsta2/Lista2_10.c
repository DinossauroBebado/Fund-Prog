#include <stdio.h>
#include <string.h>

//Desenvolva um programa que leia uma string do teclado e através de uma mensagem indique se esta string
//representa uma sequência octal ou não. Um sequência octal é formada somente por caracteres 0, 1, 2, 3, 4,
//5, 6 ou 7.
int main()
{
    char sequencia[100];
    int octal = 1; //
    int i;
    gets(sequencia);

    int n = strlen(sequencia);

    for (i = 0; i < n; i++)
    {
        if (sequencia[i] == '8' || sequencia[i] == '9')
        {
            octal = 0; //octal se mantem verdadeiro ate que um numero proibido aparece
        }
    }
    if (octal)
        printf("Essa sequencia eh octal");
    else
        printf("Essa sequencia  nao eh octal");

    return 0;
}