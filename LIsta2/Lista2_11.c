#include <stdio.h>
#include <string.h>

int main()
{
    char sequencia[100];
    int hex, i = 0; //

    gets(sequencia);

    int n = strlen(sequencia);

    for (i = 0; i < n; i++)
    {
        printf("%d\n", sequencia[i]);
        if (47 > sequencia[i] < 58 || 64 > sequencia[i] < 71)
        { //usando a tabela Asc2 para verificar a condição
            hex = 1;
        }
    }
    if (hex)
        printf("Essa sequencia eh hex");
    else
        printf("Essa sequencia  nao eh hex");

    return 0;
}