//Desenvolvauma  estrutura  modular com uma  função que  recebe  através de
// parâmetro um número inteiro positivo e retorna a quantidade de dígitos deste número.

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>
int digito(float N){
    int i = 0;
    while(N/pow(10,i)>1.0){
        printf("%f\n",N/pow(10,i));
        i++;
    }
       return i;
    }



int main( ){
int d ;
printf("Qual o numero ? \n");
scanf("%d",&d);

printf("O numero %d tem %d algorismos\n",d,digito(d));

}
