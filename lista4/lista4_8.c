//Escrever um programa que leia dois vetores (tipo int) de tamanhos igual a 5. Faça uma função que receba como
//parâmetros os vetores lidos e gere um novo vetor que corresponda à concatenação dos vetores passados como
//parâmetro

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

//---------------------------------------------------------------nao funciona


int concat(int A[5], int B[5],int C[]){
    for(int i = 0;i<= 9;i++){
        if(i<5){
           C[i] = A[i];
        }else{
            C[i] = B[i-5];
        }
    }


}

int main(){
    int A[5],B[5],C[10];
    printf("Vetor A : \n");
    for(int i = 0; i<5;i++){
        scanf("%d",&A[i]);
    }
     printf("Vetor B : \n");
     for(int j = 0; j<5;j++){
        scanf("%d",&B[j]);
    }

     concat(A,B,C);

     printf("Vetor C : \n");
    for(int z = 0;z<10;z++){
        printf("%d ",C[z]);

    }



}
