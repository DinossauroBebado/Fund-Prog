
//Faça um programa que leia um arquivo texto contendo uma lista de compras. Cada linha do arquivo
//possui nome, quantidade e valor unitário do produto (estes dados devem ser definidos pelo
//programador). O programa deve exibir o valor total da compra.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
typedef struct {
    char produto[50];
    int n ;
    float v ;
} lista;



int main(){
setlocale(LC_ALL,"Portuguese");
FILE *listaDeCompras ;
int N;
char c;

listaDeCompras = fopen("listaDeCompras.txt","r");

if(listaDeCompras==NULL){
    printf("Arquivo nao pode ser aberto");
    exit(1);
}
 c = fgetc(listaDeCompras);
while (c != EOF) {
    if(c=='\n');
    N++;
    c = fgetc(listaDeCompras);
}
printf("%d\n",N);

lista *lst = (lista*)malloc(N*sizeof(lista));
if(lst==NULL){
    printf("Erro de memoria");
    exit(1);
}
int i = 0;
while(!feof(listaDeCompras)){
    fscanf(listaDeCompras,"%s %d %f",lst[i].produto,lst[i].n,lst[i].v);
    i++;

}
float sum = 0;
for(int j = 0;j<N;j++){
    sum = sum + (lst[i].n*lst[i].v)
}
printf("O total da compra foi %.f",soma);
fclose(listaDeCompras);
free(lst);
}
