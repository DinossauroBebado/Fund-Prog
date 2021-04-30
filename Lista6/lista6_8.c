
//Faça um programa que receba a nota e o nome de uma quantidade de alunos
//fornecida pelo usuário, calcule a média, quantidade de notas acima da média, e
//quantidade de notas abaixo da média. (Obs. Utilize struct, alocação dinâmica de
//memória e função com parâmetro por referência).


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[30];
    float nota ;
} notas ;

float media(struct notas *not, int n ){
 int i;
 for(i=0;i<n;i++){
    printf("%.2f\n",not[i].nota)
 }
}

int main(){
int n ;

printf("Informe o numero de alunos: ");
scanf("%d", &n);

notas *not = (notas*) malloc(n*sizeof(notas));

for(i=0;i<n;i++){
    printf("--------%d---------",i);
    printf("Nome :");
    gets(not[i].nome);

    printf("Nota : ");
    scanf("%f",&not[i].nota);
}

media(%not,n);




}
