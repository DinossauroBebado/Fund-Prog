//Elabore um programa que leia do usu�rio o tamanho de um vetor a ser lido. Em
//seguida, fa�a a aloca��o din�mica desse vetor. Por fim, leia o vetor do usu�rio e o
//imprima.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
int tamanhoVetor, *p,i ;

printf("Qual o tamanho do vetor ? \n");
scanf("%d",& tamanhoVetor);

p = (int *) malloc(sizeof(int));
*p = tamanhoVetor;

int vetor[*p];

for(i = 0;i<tamanhoVetor;i++){
    printf("%d :",i +1);
    scanf("%d",&vetor[i]);
}
printf("------------------------------\n");
for(i = 0;i<tamanhoVetor;i++){
    printf("%d\n",vetor[i]);
}

free(p);
return 0 ;
}
