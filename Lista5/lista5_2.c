//Escreva um programa que contenha duas vari�veis inteiras. Leia essas vari�veis do teclado. Em
//seguida, compare seus endere�os e exiba o conte�do do maior endere�o.

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
