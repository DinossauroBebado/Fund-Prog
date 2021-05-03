//Escreva uma função que receba como parâmetro um valor N e retorne o ponteiro
//para uma matriz N×N alocada dinamicamente. Essa matriz deve conter o valor 1
//na diagonal principal e 0 nas demais posições.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int **alocaMatrix(int N) {
  int **x, i, j;
  x = (int **)malloc(N* sizeof(int*));
  for(i=0; i<N; i++) {
    x[i] = (int *)malloc(N * sizeof(int));
    for(j=0; j<N; j++) {
      if(i==j){
        x[i][j] = 1;
      }else{
        x[i][j] = 0;
        }
    }
  }
  return(x);
}


int main(){

int N,i,j;

printf("Qual o tamanho da matriz ?\n");
scanf("%d",&N);

int **matrix = alocaMatrix( N );

for(i=0;i<N;i++){
        for(j=0;j<N;j++){
         printf("%d ",matrix[i][j]);

        }
        printf("\n");

}


}
