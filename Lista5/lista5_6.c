//Crie um programa que contenha um array de cinco elementos inteiros. Leia esse array do teclado e
//imprima o endereço das posições contendo valores pares.
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
    if((*p+i)%2==0){
        printf("%d\n",p+i);
    }
}
}
