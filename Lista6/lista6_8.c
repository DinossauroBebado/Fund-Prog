/* 8. Faça um programa que receba a nota e o nome de uma quantidade de alunos
fornecida pelo usuário, calcule a média, quantidade de notas acima da média, e
quantidade de notas abaixo da média. (Obs. Utilize struct, alocação dinâmica de
memória e função com parâmetro por referência). */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[30];
    float nota ;
} notas ;

float media(notas *not, int n ){
 int i;
 float sum= 0;
 float d;
 for(i=0;i<n;i++){
   sum = sum + not[i].nota;
 }
 d = sum/n;
 return d;
}

int main(){
int n,i;
float maior,menor ;
maior = 0;
menor = 0;

printf("Informe o numero de alunos: ");
scanf("%d", &n);

notas * not = (notas *) malloc(n*sizeof(notas));



for(i=0;i<n;i++){
    printf("--------%d---------\n",i);
    printf("Nome :");
    setbuf(stdin, NULL);
    gets(not[i].nome);

    printf("Nota : ");
    scanf("%f",&not[i].nota);

    if(not[i].nota>=media(not,n)){
        maior ++ ;
        }
}
    menor = n - maior;
printf("------------------------\n");
printf("    Acima : %.f\n    Abaixo: %.f\n    Media : %.2f\n",
       maior,
       menor,
       media(not,n));
printf("------------------------\n");

 return 0;
}
