//
//Fa�a uma fun��o chamada troca( ), que receba como par�metro duas vari�veis A e B e apresente na sa�da os valores
//trocados, ou seja, B passa a valer o que A valia e A passa a valer o que B valia. Pergunta: a passagem dos par�metros
//deve ser por valor ou por refer�ncia?
//referencia

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int troca( int *A, int *B){
    int C = *A;

    *A = *B ;
    *B = C;

    return A,B ;

}
int main(){
 int A,B ;
printf("A :");
scanf("%d",&A);
printf("B :");
scanf("%d",&B);

printf("Antes da funcao\n");
printf("%d e %d\n",A,B);

troca(&A,&B);

printf("----------------------------------\n");
printf("Depois da funcao\n");
printf("%d e %d\n",A,B);

return 0 ;
}


