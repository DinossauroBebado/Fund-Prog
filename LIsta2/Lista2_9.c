#include <stdio.h>
#include <string.h>

//Desenvolva um programa que leia uma string do teclado e a seguir
// mostre os caracteres na ordem inversa.
//Por exemplo:
//Entrada: PATO BRANCO
//SAÍDA: OCNARB OTAP
int main()
{
    char inversa[100], palavra[100];
    int n, i;
    gets(palavra);
    n = strlen(palavra);
    for (i = 0; i < n; i++)
    {
        inversa[i] = palavra[(n - 2) - i];
    }
    printf("%s", inversa);
    return 0;
}
