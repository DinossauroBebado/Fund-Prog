//Escreva um programa que leia de um arquivo, cujo nome deve ser fornecido pelo usu�rio, um conjunto
//de n�meros reais que devem ser armazenados em um vetor. O tamanho m�ximo do vetor � dado pela
//constante TAM_MAX. A quantidade de n�meros no arquivo pode variar entre 0 e TAM_MAX. O
//programa ao final deve calcular a m�dia dos n�meros lidos.


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM_MAX 10

int main(){
setlocale(LC_ALL,"Portuguese");
//char nArquivo[50];
int n,i,j,numeros[TAM_MAX];
float sum;
//printf("Nome do arquivo:");
//fflush(stdin);
//gets(nArquivo);
char nArquivo[50] = "numeros.txt";

FILE *arquivo = fopen(nArquivo,"r");

if(arquivo==NULL){
    printf("Arquivo nao pode ser aberto");
    exit(1);
}
j=0;
while(fscanf(arquivo,"%d",&n)!=EOF){
   numeros[j]=n;
   j++;
}
for(i=0;i<j;i++){
    sum = sum + numeros[i];
}

float media = sum/j;

printf(" A media : %f \n",media);




}
