
//Elabore uma função que receba dois parâmetros: um vetor e um valor do mesmo tipo do vetor. A
//função deverá preencher os elementos do vetor com esse valor. Não utilize índices para percorrer o
//vetor, apenas aritmética de ponteiros

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define n 5

int preenche(int *v,int *pa){
    int i;
     printf("%d : %d\n",*pa,pa);
     for(i = 0; i < n; i++){
        *(v+i) = pa;
     }

    return *v;
}


int main(){
    int i,v[n],a,*s;
    printf("Digite um valor: ");
    scanf("%d",&a);
    s = preenche(v,&a);
    for(i= 0;i<n;i++){
    printf("Vetor[%d]: %d\n",i,*s);
    }
    return 0;

}
