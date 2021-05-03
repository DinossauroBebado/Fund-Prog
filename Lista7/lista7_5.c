//
//Crie uma função que receba duas strings como parâmetros, uma com um endereço (localização) de
//arquivo e outra com um texto qualquer, e adicione o texto no fim do arquivo.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void add(FILE *arquivo, char* texto){

fputs(texto,arquivo);

}
//nao tenho ctz se é isso que ele quer ;


int main(){
setlocale(LC_ALL,"Portuguese");
char texto[50] = "\nnot found";

FILE *arquivo = fopen("motivacao.txt","a+");

if(arquivo==NULL){
    printf("Arquivo nao pode ser aberto");
    exit(1);
}
add(arquivo,texto);

fclose(arquivo);
}
