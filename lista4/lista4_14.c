////O n�mero3025 possui a seguinte caracter�stica:
//a)30 + 25 = 55
//b)55 * 55 = 3025
//Desenvolva  uma  estrutura  modular  que  verifica,  atrav�s  de
//// uma  fun��o,  e  imprima todos  os  n�meros  de  quatro algarismos (de 1000 at� 9999) que apresentam tal caracter�stica
//// .Resposta esperada: 2025, 3025, 9801.

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

#define comeco 1000
#define final 9999

int soma(int n){
    int n1, n2;

    n1 = n/100 ;
    n2 = n-(n1*100) ;
    printf("%d : %d | %d\n",n,n1,n2);
    return n1+n2 ;
}

int pot(N){
    int n ;
    n = soma(N);
    return n*n ;
}


int main(){
    int resposta[100];
    int n,j,i = 0;
    for(j = comeco; j<final ; j++ ){
        if(pot(j)== j){
            resposta[n] = j ;
            n++ ;
        }
    }
    printf("------------------- RESPOSTA -------------------------------------\n");
    for(i = 0;i<n;i++){
        printf("%d\n",resposta[i]);
    }

    }


