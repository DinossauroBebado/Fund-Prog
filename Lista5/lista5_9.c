//Crie uma função que receba como parâmetro um vetor e o imprima. Não utilize índices para
//percorrer o vetor, apenas aritmética de ponteiros.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define n 5

void print(int *v){
    int i;
    for(i=0;i<n;i++){
        printf("%d : %d : %p\n",*(v+i),v+i,v+i);
    }
}

int main(){
    int v[n]={1,2,3,4,5};

    print(v);



}
