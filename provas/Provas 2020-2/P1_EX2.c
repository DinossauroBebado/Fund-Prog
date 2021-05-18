//Autor : Guilherme Pires Silva
//Data : 17/5/21
//ex 2

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 8//escolhe um tamanho n para o vetor a ser digitado

void lerVetor(int x[], int n){
 int i;
 printf("Entrada de dados\n");
 for(i=0;i<n;i++){
    printf("%d valor de %d ",i+1,n);
    scanf("%d",&x[i]);
 }
}

int *criarVetor(int x[], int n, int inicio){
int *vet,i;

//cria o vetor
vet = (int *) malloc((n/2)*sizeof(int));

if(vet==NULL){
    printf("Erro de memoria");
    exit(1);
}

int k = 0;

for(i=0;i<n;i++){
    if(inicio){
    //posicoes impares
        if(i%2!=0){
            vet[k]=x[i];
            k++;
        }
    }else{
    //posicoes pares
        if(i%2==0){
            vet[k]=x[i];
            k++;
         }
    }
}

return vet;
}

void mostrarVetor(char nome[], int x[], int n){
    int i,sum = 0 ;

    for(i=0;i<n;i++){
        sum = sum + x[i];
    }

    printf("\n%s = { ",nome);

    for(i=0;i<n;i++){
        printf("%d ",x[i]);
    }
    printf("} soma = %d\n",sum);

    sum =0;
}

int main(){

int x[N];
int *b ,*c ;
lerVetor(x,N);

//cria um vetor com os elementos das posiçoes pares do vetor digitado
b = criarVetor(x,N,0);
//cria um vetor com os elementos das posiçoes impares do vetor digitado
c = criarVetor(x,N,1);

//passa o vetor digitado
mostrarVetor("a",x,N);
//passa o vetor com as posiçoes pares
mostrarVetor("b",b,(N/2));
//passa o vetor com as posicoes impares
mostrarVetor("c",c,(N/2));

free(b);

free(c);

return 0 ;
}

