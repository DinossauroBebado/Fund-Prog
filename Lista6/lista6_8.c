
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

float media(notas *not, int n ){
 int i;
 float sum= 0;
 for(i=0;i<n;i++){
   sum = sum + not[i].nota;
 }
 return sum/n ;
}

int main(){
int n,i,maior,menor ;
maior = 0;
menor = 0;
float med = 6.0 ;

printf("Informe o numero de alunos: ");
scanf("%d", &n);

notas *not = (notas*) malloc(n*sizeof(notas));

for(i=0;i<n;i++){
    printf("--------%d---------\n",i);
    printf("Nome :");
    fflush(stdin);
    gets(not[i].nome);

    printf("Nota : ");
    scanf("%f",&not[i].nota);

    if(not[i].nota>=med){
        maior ++ ;
        }
}

menor = n-maior;
printf("------------------------\n");
printf("    Maior nota : %.d\n    Menor nota : %.d\n    Media : %.2f\n",
       maior,
       menor,
       media(not,n));
printf("------------------------\n");

}
