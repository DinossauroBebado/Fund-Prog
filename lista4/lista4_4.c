//Fa�a uma fun��o chamada menu() em que as op��es de escolha s�o
//1. Cadastrar
//2. Listar
//3. Salvar
//4. Sair
//A fun��o n�o receber� nada como par�metro e deve retornar o valor escolhido.


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

enum opcoes{Cadastrar =1,Listar,Salvar,Sair};

int menu(void){

enum opcoes opt;
int escolha;
do{
printf("1. Cadastrar\n2. Listar\n3. Salvar\n4. Sair\n");

scanf("%d",&escolha);}while(escolha<1&&escolha>4);

switch (escolha){
    case Cadastrar:
        return Cadastrar ;
    case Listar:
        return Listar ;
    case Salvar:
        return Salvar ;
    case Sair:
        return Sair ;

}

}
int main(){
        while(1){
            printf("%d\n",menu());};
}
