//Crie um programa que contenha uma matriz de float de dimensões 3×3 e imprima na tela o endereço de cada posição
//da matriz.


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

#define n 3

int main(){

float Matrix[n][n] ;
int i,j;
printf("Matriz: \n");
for(i = 0;i<n;i++){
    for(j = 0;j<n;j++){
       scanf("%f",&Matrix[i][j]);
    }
   printf("\n");
}
for(i = 0;i<n;i++){
    for(j = 0;j<n;j++){
      printf("Posicao do elemento %d i %d j | %.2f = %d\n",i,j,Matrix[i][j],&Matrix[i][j]);
    }

}





return 0 ;
}
