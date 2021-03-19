//Desenvolver uma estrutura modular com uma função que determina e retorna a potência de um número. A função
//deverá receber através de parâmetro a base e o expoente da potência, com um número positivo, e sem utilizar funções
//prontas do C deverá realizar o cálculo através de um processo de repetição. Por exemplo, para os valores 2 para a
//base e 5 para o expoente a função deverá retornar 32 fazendo, 25
//= 2 X 2 X 2 X 2 X 2 = 32.

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int pot(int base, int expoente){
    int i, r ;
    if(expoente==0)
        return 1;
    r = 1;
    for(i=1;i<=expoente;i++){
        r = r*base;
    }

    return r ;

}

int main(){
int base,expo ;
printf("Base :");
scanf("%d",&base);
printf("Expoente:");
scanf("%d",&expo);

printf("%d",pot(base,expo));


}
