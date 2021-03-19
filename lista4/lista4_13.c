//Número perfeito é aquele cuja soma de seus divisores, exceto ele próprio, é igual ao número. Exemplo: 6 é perfeito
//porque 1 + 2 + 3 = 6. Desenvolva uma estrutura modular que imprima todos os números perfeitos compreendidos
//entre 1 e 500. Resposta esperada: 6, 28, 496.

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

#define max 500

int acha_divisores(int N,int divisores[]){
    int n ;
    n = 0;
    for(int i = 1;i<=(N/2);i++){
        if(N%i==0){
            divisores[n] = i;
            n++;
        }
    }
    return n ;
}

int soma_divisores(int N,int divisores[],int n ){
    int soma = 0;

    for(int i = 0;i<n;i++){
        soma = soma + divisores[i];
    }
    if(soma==N){
        return 1;
    }else{
        return 0;
        }
}

int main(){
  int x,n,divisores[100],respostas[100];
  x = 0;
  for(int j = 1; j<max;j++){
    n = acha_divisores(j,divisores);
    if( soma_divisores(j,divisores,n)){
        respostas[x] = j;
        x++;
    }else{
    continue ;
    }
    divisores[j] = 0;
  }

 for(int i = 0;i<x;i++){
   printf("%d\n",respostas[i]);
 }


 return 0 ;
}


