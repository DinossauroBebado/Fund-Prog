//Faça um programa que leia 10 caracteres e armazene em um arquivo 10 cópias de cada caractere.
//Exiba o conteúdo do arquivo.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");

int i,j;

FILE *arquivo;

arquivo = fopen("repete.txt","w+");
if(arquivo==NULL){
    printf("Arquivo nao pode ser aberto");
    exit(1);
}
for(i=0;i<10;i++){
    char c[2] ;
    printf("Letra %d: ",i+1);
    gets(c);
    for(j=0;j<10;j++){
        fputs ( c, arquivo );
    }
    fputs("\n",arquivo);
}
rewind(arquivo);

char r;

while (!feof(arquivo)){
    r=fgetc(arquivo);
    printf("%c",r);
}

fclose(arquivo);

return 0;

}
