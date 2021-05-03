//Faça um programa que leia um arquivo texto contendo uma lista de compras. Cada linha do arquivo
//possui nome, quantidade e valor unitário do produto (estes dados devem ser definidos pelo
//programador). O programa deve exibir o valor total da compra.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
typedef struct {
    char produto[50];
    float n ;
    float v ;
} lista;



int main(){
setlocale(LC_ALL,"Portuguese");
FILE *listaDeCompras ;

listaDeCompras = fopen("listaDeCompras.txt","r");

if(listaDeCompras==NULL){
    printf("Arquivo nao pode ser aberto");
    exit(1);
}

lista lst ;
float sum = 0;

while(fscanf(listaDeCompras,"%s %f %f",lst.produto,&lst.n,&lst.v)!=EOF){
   printf("%s %.2f %.2f\n",lst.produto,lst.n,lst.v);
   sum = sum + (lst.n*lst.v);
}


printf("O total da compra foi %.2f",sum);
fclose(listaDeCompras);

}
