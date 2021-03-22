//Número perfeito é aquele cuja soma de seus divisores, exceto ele próprio, é igual ao número. Exemplo: 6 é perfeito
//porque 1 + 2 + 3 = 6. Desenvolva uma estrutura modular que imprima todos os números perfeitos compreendidos
//entre 1 e 500. Resposta esperada: 6, 28, 496.

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

#define max 500


struct divisores {
 int divisores[500];
 int n ;
};

int acha_divisores(int N,int divisores[]){
    //recebe o numero para achar os divores e um array para colocar os divisores
    //retorna o numero de elementos do array divisores
    int i;
    int n = 0 ;

    for(i = 1; i<=(N/2); i ++) {
        if ( N%i==0){
            divisores[n] = i ;
            n++ ;
        }
    }
    return n ;
}
int soma(int N,int n ,int divisores[]){
    //recebe o numero analisado, o numero de elementos do array divisores e o array com os divisores
    //retorna um boleano se a soma dos divisores é igual ao numero N
    int j;
    int soma = 0 ;
    for(j =0;j<n;j++){
        soma = soma + divisores[j];
    }
    if ( soma==N){
        return 1 ;
    }else{ return 0;}

}


int main(){
  int divisores[100];
  int resposta[100];
  int N = 0 ;
  int x = 0 ;
  int u,n;
  struct divisores div[max];
  //passa por todos os numeros de 1 ate 500
  for(N = 1;N<max;N++){
      div[N].n = acha_divisores(N,div[N].divisores); // acha o numero de elementos divisiveis
      if(soma(N,acha_divisores(N,div[N].divisores),div[N].divisores)){ //verifica se a soma de divisores é igual ao numero
        resposta[x] = N;//adiciona no array respostas
        x++;
      }
  }
  for(int j = 0 ; j<x ; j++){
  printf("%d\n",resposta[j]);
  }
return 0 ;
}




