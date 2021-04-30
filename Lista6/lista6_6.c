//Escrever um programa que leia dois vetores de mesmo tamanho. O usuário
//deverá informar o tamanho e os elementos dos vetores. Escrever uma função que
//receba como parâmetros os vetores lidos e gere um novo vetor que corresponda
//aos vetores passados como parâmetro de forma intercalada.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mexeRemexe(int *v1, int *v2, int N){
int *vet3,i,j;

vet3 = (int*) malloc((2*N)*sizeof(int));
int k = 0;
int l = 0;

for(i=0;i<2*N;i++){
    if(i%2==0){
        vet3[i]=v1[k];
        k++;
    }else{
        vet3[i]=v2[l];
        l++;
    }

}
  return vet3 ;
}



int main(){

 int N ;

 printf("Qual o tamanho dos vetores ?\n");
 scanf("%d",&N);

 int i, vet1[N],vet2[N];

 for(i = 0 ; i<N ; i++){
        printf("vetor1[%d] : ",i);
        scanf("%d",&vet1[i]);
    }


printf("--------------\n");


for(i = 0 ; i<N ; i++){
        printf("vetor2[%d] : ",i);
        scanf("%d",&vet2[i]);
    }

int *vet3 = mexeRemexe(vet1,vet2,N);

for(i=0;i<2*N;i++){
    printf("%d\n",vet3[i]);
}

return 0 ;
}
