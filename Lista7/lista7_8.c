//Escreva um programa que receba do usuário os dados de 5 amigos utilizando a estrutura
//struct pessoa{
//char nome[50];
//int idade;
//float altura;
//char telefone[10];
//} amigos[5];
//e que salve os dados recebidos em um arquivo texto formatado como se segue:
//––––––
//[nome] tem [idade] anos e [altura] de altura.
//Tel.: [telefone].
//––

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define AMIGOS 1

typedef struct pessoa{
    char nome[50];
    int idade;
    float altura;
    char telefone[10];
} amigos[AMIGOS];


int main(){
setlocale(LC_ALL,"Portuguese");
int i;

amigos amg ;

printf("---------------------------\n");
for(i = 0;i<AMIGOS;i++){
     printf("Nome: ");
     fflush(stdin);
     gets(amg[i].nome);
     printf("Idade: ");
     scanf("%d",&amg[i].idade);
     printf("Altura: ");
     scanf("%f",&amg[i].altura);
     printf("Telefone: ");
     fflush(stdin);
     gets(amg[i].telefone);
     printf("---------------------------\n");
}

FILE *contatos =  fopen("Contatinhos.txt","w");
if(contatos==NULL){
     printf("Arquivo nao pode ser aberto");
     exit(1);
}
fprintf(contatos,"---------------------------\n");
for(i = 0;i<AMIGOS;i++){
    fprintf(contatos,"%s tem %d e %.2f de altura.\nTel : %s\n",
           amg[i].nome,
           amg[i].idade,
           amg[i].altura,
           amg[i].telefone
           );
    fprintf(contatos,"---------------------------\n");
}
 printf("Completo");
 fclose(contatos);
 return 0;
}
