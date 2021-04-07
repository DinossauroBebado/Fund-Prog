//Crie um programa que contenha um array de inteiros contendo cinco elementos. Utilizando apenas
//aritmética de ponteiros, leia esse array do teclado e imprima o dobro de cada valor lido.

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#define n 5
int main(){
int i,*p ,A[n];
p = &A[0];

for(i=0;i<n;i++){
    scanf("%d",p+i);
}

for(i=0;i<n;i++){
    printf("%d\n",(*p+i)*2);

}

}
