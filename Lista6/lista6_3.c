//Elabore um programa que leia do usuário o tamanho de um vetor a ser lido. Em
//seguida, faça a alocação dinâmica desse vetor. Por fim, leia o vetor do usuário e o
//imprima.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
int tamanhoVetor, *p,i ;

printf("Qual o tamanho do vetor ? \n");
scanf("%d",& tamanhoVetor);

p = (int *) malloc(sizeof(int));

if(p==NULL){
    printf("Erro de memoria");
    exit(1);
}

*p = tamanhoVetor;

for(i = 0;i<tamanhoVetor;i++){
    printf("%d :",i +1);
    scanf("%d",&p[i]);
}
printf("------------------------------\n");
for(i = 0;i<tamanhoVetor;i++){
    printf("%d\n",p[i]);
}

free(p);
return 0 ;
}
