//Fazer um programa que receba do usuário a quantidade N de números a ser
//digitada. Em seguida, o programa deve alocar dinamicamente um vetor de N
//inteiros, receber N números do usuário e armazenar no vetor, e mostrar o maior
//valor do vetor, o menor valor do vetor e a média dos valores.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int *vet,N,i;
    printf("Qual o tamanho do vetor ?\n");
    scanf("%d",&N);

    vet = (int *) malloc(N*sizeof(int));

    for(i = 0 ; i<N ; i++){
        printf("%d : ",i);
        scanf("%d",&vet[i]);
    }

int maior = vet[0];
int menor  = vet[0];
int sum = 0;
 for(i = 0 ; i<N ; i++){
       if(vet[i]>maior){
            maior = vet[i];
       }
       if(vet[i]<menor){
            menor = vet[i];
       }
       sum = sum + vet[i];
    }
    float media = sum/N;
printf("  Maior valor : %d \n  Menor valor : %d \n  Media : %.2f",maior,menor,media);

 return 0 ;
}

