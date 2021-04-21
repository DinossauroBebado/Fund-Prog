/* 11. Crie uma função que receba dois parâmetros: um vetor e um valor do mesmo tipo do vetor. A
função deverá preencher os elementos de vetor com esse valor. Não utilize índices para percorrer o
vetor, apenas aritmética de ponteiros. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define n 5

int preenche(int v[n],int a){
     int *i;
     printf("NOVO VETOR \n");
     for(i = v; i <v + n; i++){
        *i = a;
     }


}


int main(){
    int i,a;

    int v[n] = {1,2,3,4,5};

    printf("Digite um valor: ");
    scanf("%d",&a);

    for(i= 0;i<n;i++){
        printf("Vetor[%d]: %d\n",i,v[i]);
        }

    preenche(v,a);

     for(i= 0;i<n;i++){
        printf("Vetor[%d]: %d\n",i,v[i]);
        }


    return 0;

}
