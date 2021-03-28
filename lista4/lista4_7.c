//Escreva uma fun��o que receba como par�metros de entrada APENAS tr�s vari�veis reais, e retorne a m�dia do valor
//destas tr�s vari�veis, o maior valor entre elas e a diferen�a entre a m�dia e este maior valor. Obs.: N�o � permitido
//utilizar vari�veis globais.

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

void analise(float *x, float *y, float *z)
{
    float media, maior, sum, desvio_maior;
    float xx, yy, zz;
    int i;

    xx = *x;
    yy = *y;
    zz = *z;

    float number[3] = {xx, yy, zz};

    for (i = 0; i < 3; i++)
    {
        sum = sum + number[i];
        maior = number[0];
        if (number[i] > maior)
        {
            maior = number[i];
        }
    }

    media = sum / 3;
    desvio_maior = maior - media;

    *x = media;
    *y = desvio_maior;
    *z = maior;
}
int main()
{

    float x, y, z;
    printf("1 numero :");
    scanf("%f", &x);
    printf("2 numero :");
    scanf("%f", &y);
    printf("3 numero :");
    scanf("%f", &z);

    analise(&x, &y, &z);

    printf("%f, %f, %f", x, y, z);

    return 0;
}
