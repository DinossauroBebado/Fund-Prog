#include <stdio.h>
#include <string.h>

//Escreva um programa para ler uma frase e um caractere. Sempre que o caractere lido aparecer na frase ele
//deve ser substituído por asterisco. Por exemplo se os valores fornecidos fossem para a frase: o dia esta
//nublado, e para o caractere: a, o programa deverá fornecer o seguinte resultado: o di* est* nubl*do.
int main()
{
    char letra[1], frase[100];
    int i;
    printf("Frase :\n");
    gets(frase);
    printf("Letra :\n");
    gets(letra);

    for (i = 0; frase[i] != '\0'; i++)
    {
        if (frase[i] == letra[0])
        {
            frase[i] = '*';
        }
    }
    printf("%s\n", frase);
    return 0;
}
