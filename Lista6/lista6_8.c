
//Fa�a um programa que receba a nota e o nome de uma quantidade de alunos
//fornecida pelo usu�rio, calcule a m�dia, quantidade de notas acima da m�dia, e
//quantidade de notas abaixo da m�dia. (Obs. Utilize struct, aloca��o din�mica de
//mem�ria e fun��o com par�metro por refer�ncia).


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
