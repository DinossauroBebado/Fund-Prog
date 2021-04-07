//Crie um programa que contenha uma matriz de float contendo três linhas e três colunas. Imprima o
//endereço de cada posição dessa matriz
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#define linha 3
#define coluna 3

int main(){

float M[linha][coluna] ;
int i, j;
float b = 1.0;
for(i=0;i<linha;i++){
    for(j=0;j<coluna;j++){
        M[i][j] = i + j ;
        printf("%.2f ", M[i][j]);
    }
     printf("\n");
}
 printf("-------------------------\n");
for(i=0;i<linha;i++){
    for(j=0;j<coluna;j++){
    printf("Posicao %d X %d : %d\n",i,j,&M[i][j]);

    }
}
}
