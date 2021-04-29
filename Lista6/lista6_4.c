//Escreva uma função que receba como parâmetro um valor N e retorne o ponteiro
//para uma matriz N×N alocada dinamicamente. Essa matriz deve conter o valor 1
//na diagonal principal e 0 nas demais posições.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int *alocaMatrix(int N ){
    int *p,i,j;

    p = (int *) malloc(N*sizeof(int));

    *p = N ;

    int matrix[*p][*p];

    for(i = 0;i<N;i++){
            for(j = 0;j<N;j++){
                if(i==j){
                    matrix[i][j]= 1;
                }else{
                    matrix[i][j]= 0;
                }
            }

    }


return &matrix;

}

int main(){
int N,*i,j ;

scanf("%d",&N);
int **matrix[N][N] ;
//matrix[N][N] = alocaMatrix(N);
for(i = alocaMatrix(N);i<(N*N);i++){
       printf("%d",*i);
}
}
