#include <stdio.h>
#include <string.h>

//. Elabore um programa para obter o nome de uma pessoa e a seguir forneça o sobrenome do
//nome informado. Por exemplo para o nome: Omero Francisco Bertol, o programa deverá
//fornecer como resultado: Seja bem-vindo(a) Sr(a). Bertol. Leve em consideração que entre
//as partes do nome (Omero, Francisco e Bertol) existem um, e somente um, caractere espaço.

int main()
{
    char frase[100];
    int pos, i, j; //

    gets(frase);

    int n = strlen(frase);

    for (i = 0; i < n; i++)
    {
        if (frase[i] == 32)
        {            // procura pelo espaço(ASCII)
            pos = i; //salva o ultimo espaço
        }
    }
    printf("Seja bem-vindo(a) Sr(a) ");
    for (j = pos + 1; j < n; j++)
    { //começa  a imprimir a partir do ultimo espaço
        printf("%c", frase[j]);
    }

    return 0;
}
