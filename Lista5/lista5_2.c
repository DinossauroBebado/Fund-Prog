//Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do teclado. Em
//seguida, compare seus endereços e exiba o conteúdo do maior endereço.

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main(){
int X,Y ;
printf("X:");
scanf("%d",&X);
printf("Y:");
scanf("%d",&Y);
printf("-----------------------------------\n");
printf("X = %d | %d \nY = %d | %d\n",X,&X,Y,&Y);
printf("-----------------------------------\n");

if(&X>&Y){
    printf("Maior endereco : %d",X);
}else{
 printf("Maior endereco : %d",Y);}



}
