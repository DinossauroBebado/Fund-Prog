//Desenvolver uma estrutura modular com duas funções que recebem através de parâmetro um caractere e retornam na
//primeira função, o correspondente caractere alfabético maiúsculo e na segunda função o correspondente caractere
//alfabético minúsculo.

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

//-------------------estrutura modular??????

char maiusculo(char c){
    char C;
    if(c>='A'&&c<='Z'){
        C = c ;
    }
    else{
        C = c - 32;
    }
    return C ;
}

char minusculo(char c){
    char C;
    if(c>='a'&& c<='z'){
        C = c ;
    }
    else{
        C = c + 32;
    }
    return C ;
}

int main(){
    char C ;
    printf("Digite um caracter");
    scanf("%c",&C);
    printf("Caracter : %c | Maiusculo : %c |Minusculo : %c\n",C,maiusculo(C),minusculo(C));


}
