//Crie uma fun��o que receba como par�metro um vetor e o imprima. N�o utilize �ndices para
//percorrer o vetor, apenas aritm�tica de ponteiros.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define n 5

void print(int v[n]){
    int *i;
    for(i=v;i<v + n;i++){
        printf("%d : %d : %p\n",*i,i,i);
    }
}

int main(){
    int v[n]={1,2,3,4,5};

    print(v);



}
