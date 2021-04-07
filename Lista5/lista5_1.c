//Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e exiba o maior
//endereço.
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
int main(){
int X = 42;
int Y = 32;

printf("X = %d | %d \nY = %d | %d\n",X,&X,Y,&Y);
printf("-----------------------------------\n");

if(&X>&Y){
    printf("Maior endereco : %d",&X);
}else{
 printf("Maior endereco : %d",&Y);}



}
