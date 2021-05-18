//Autor : Guilherme Pires Silva
//Data : 17/5/21
////ex 1 Desenvolva um programa que faz a operação adição ou subtração
//entre dois números inteiros. Os números (de apenas 1 dígito) e a operação devem ser inseridos como
//texto. O resultado deve ser numérico.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int numero(char s[]){
 if(s[0]=='z')
    return 0;

 if(s[0]=='u')
    return 1;

 if(s[0]=='d')
    return 2;

 if(s[0]=='t')
    return 3;

 if(s[0]=='q')
    return 4;

 if(s[0]=='c')
    return 5;

 if(s[2]=='i')
    return 6;

 if(s[0]=='o')
    return 8;

 if(s[2]=='t')
    return 7;

 if(s[0]=='n')
    return 9;

}



int main(){

char a[10], b[10], op[10];
int x, y, resultado;

printf("Entre com a operacao : ");

scanf("%s %s %s", &a, &op, &b);

x = numero(a);

y = numero(b);

if(op[1]=='a')
    resultado = x+y ;

if(op[1]=='e')
    resultado = x-y ;

printf("Eh igual a %d\n",resultado);


return 0 ;
}
