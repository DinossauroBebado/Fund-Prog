//Escrever um programa que leia dois vetores de mesmo tamanho. O usuário
//deverá informar o tamanho e os elementos dos vetores. Escrever uma função que
//receba como parâmetros os vetores lidos e gere um novo vetor que corresponda
//aos vetores passados como parâmetro de forma intercalada.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

 int N ;

 printf("Qual o tamanho dos vetores ?\n");
 scanf("%d",&N);

 int i, vet1[N],vet2[N],*vet3;

 for(i = 0 ; i<N ; i++){
        printf("vetor1[%d] : ",i);
        scanf("%d",&vet1[i]);
    }


printf("--------------\n");


for(i = 0 ; i<N ; i++){
        printf("vetor2[%d] : ",i);
        scanf("%d",&vet2[i]);
    }

vet3 = (int *) malloc((2*N)*sizeof(int));

vet3[0] = vet1[0];
vet3[1] = vet2[0];
for(i = 2 ; i<(2*N) ; i++){
        if(i%2==0){
            vet3[i] = vet1[i/2];
        }else{
            vet3[i] = vet2[(i+1)/2];
        }
    }

for(i = 0 ; i<2*N ; i++){
        printf("%d\n",vet3[i]);
}

return 0 ;
}
